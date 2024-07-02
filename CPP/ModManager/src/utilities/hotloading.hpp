#pragma once

#include <DynamicOutput/Output.hpp>
#include <Mod/CppUserModBase.hpp>

#include <chrono>
#include <iostream>
#include <ranges>
#include <thread>
#include <unordered_map>
#include <vector>

#include <Helpers/String.hpp>
#include <SigScanner/SinglePassSigScanner.hpp>
#include <UE4SSProgram.hpp>
#include <Unreal/Signatures.hpp>
#include <Unreal/UnrealVersion.hpp>
#include <Unreal/FString.hpp>

#include <utilities/debug.hpp>
#include <utilities/files.hpp>
#include <utilities/http.hpp>

#include <windows.h>

namespace fs = fs;

namespace debug = MMM::utilities::debug;
namespace files = MMM::utilities::files;
namespace http = MMM::utilities::http;


namespace MMM
{
    using namespace RC;
    using namespace fs;

    namespace utilities
    {
        namespace hotloading
        {
            // Based off of @TrumanK's PakReloader 
            // (https://github.com/trumank/RE-UE4SS/blob/ed26754e1032e335c70529edcf3c305a9f37614a/mods/pak_reloader/src/PakReloader.cpp#L167)
            // and @Turncoda's Autotload (https://github.com/turncoda/autoload)

            using namespace RC::Unreal;

            fs::path g_pak_dir;
            bool IsThreadPaused = false;

            void StartDirWatcher();
            DWORD WINAPI ThreadProc(LPVOID);
            void CommitStagedPaks(fs::path);

            struct FPakFile
            {
                void* idk1;
                void* idk2;
                void* idk3;
                FString PakFilename;
            };

            struct FPakListEntry
            {
                uint32_t ReadOrder;
                FPakFile* PakFile;
            };

            struct FPakPlatformFile
            {
                void* vftable;
                void* LowerLevel;
                TArray<FPakListEntry> PakFiles;
            };

            struct DelegateMount
            {
                void* idk1;
                void* idk2;
                void* idk3;
                FPakPlatformFile* pak;
                bool (*fn)(FPakPlatformFile*, FString&, uint32_t);
            };

            struct DelegateUnmount
            {
                void* idk1;
                void* idk2;
                void* idk3;
                FPakPlatformFile* pak;
                bool (*fn)(FPakPlatformFile*, FString&);
            };

            DelegateMount* g_mount_delegate_ptr = nullptr;
            DelegateUnmount* g_unmount_delegate_ptr = nullptr;

            std::function<bool(FString&, uint32_t)> g_mount;
            std::function<bool(FString&)> g_unmount;

            bool OnMatchFound(SignatureContainer& container)
            {
                debug::Debug2(STR("Found signature match for FPakPlatformFile dtor:"), (void*)container.get_match_address());

                int num = 0;

                uint8_t* data = static_cast<uint8_t*>(container.get_match_address());
                void* last = nullptr;
                for (uint8_t* i : std::views::iota(data) | std::views::take(3000))
                {
                    // look for 'mov rcx,[rel address]'
                    if (i[0] == 0x48 && i[1] == 0x8b && i[2] == 0x0d)
                    {
                        // mov found, resolve RIP
                        int32_t rip;
                        memcpy(&rip, i + 3, sizeof(rip));

                        void* ptr = i + 3 + 4 + rip;

                        if (ptr != last)
                        {
                            last = ptr;

                            debug::Debug3(STR("Found delegate:"), ptr, num);

                            switch (num)
                            {
                                case 2: g_mount_delegate_ptr = *(DelegateMount**)ptr; break;
                                case 3:
                                    g_unmount_delegate_ptr = *(DelegateUnmount**)ptr;
                                    container.get_did_succeed() = g_mount_delegate_ptr && g_unmount_delegate_ptr;
                                    return true;
                            }

                            num += 1;
                        }
                    }
                }

                return false;
            }

            void OnScanFinished(const SignatureContainer& container)
            {
                debug::Debug2(STR("Mount delegate address:"), (void*)g_mount_delegate_ptr);
                debug::Debug2(STR("Unmount delegate address:"), (void*)g_unmount_delegate_ptr);
                if (!container.get_did_succeed())
                {
                    debug::Warn(STR("Failed to find or resolve delegates"));
                    return;
                }

                g_mount = std::bind(g_mount_delegate_ptr->fn, g_mount_delegate_ptr->pak, std::placeholders::_1, std::placeholders::_2);
                g_unmount = std::bind(g_unmount_delegate_ptr->fn, g_unmount_delegate_ptr->pak, std::placeholders::_1);

                if (!g_mount || !g_unmount)
                {
                    debug::Warn(STR("Failed to bind mount and unmount functions"));
                    return;
                }

                CommitStagedPaks(g_pak_dir);
                StartDirWatcher();
            }

            HANDLE gh_dir_watcher_thread;
            HANDLE gh_thread_exit_event;

            void StartDirWatcher()
            {
                if (gh_dir_watcher_thread != NULL)
                {
                    debug::Error(STR("Tried to create new directory watcher thread but thread already ")
                        STR("exists!"));
                    return;
                }
                gh_dir_watcher_thread = CreateThread(NULL, // default security attributes
                                                    0, // stack size
                                                    ThreadProc, // thread function name
                                                    NULL, // argument to thread function
                                                    0, // flags
                                                    NULL // thread id
                );
                if (gh_dir_watcher_thread == NULL) { debug::Error(STR("Failed to create directory watcher thread")); }
            }

            DWORD WINAPI ThreadProc(LPVOID lpParam)
            {
                    //ResumeThread(gh_dir_watcher_thread);
                    HANDLE h_dir_change = FindFirstChangeNotificationA(g_pak_dir.string().c_str(), false, FILE_NOTIFY_CHANGE_FILE_NAME);
                    if (h_dir_change == INVALID_HANDLE_VALUE)
                    {
                        debug::Error(STR("FindFirstChangeNotificationA returned invalid handle"));
                        return 1;
                    }
                    debug::Debug2(STR("Now watching for changes in"), g_pak_dir.wstring());
                    HANDLE handles[2] = {h_dir_change, gh_thread_exit_event};
                    while (true)
                    {
                        DWORD wait_status = WaitForMultipleObjects(2, // max num wait objects
                                                                handles, // pointer to handles
                                                                FALSE, // return on any handle signaled
                                                                INFINITE // timeout
                        );
                        if (wait_status == WAIT_OBJECT_0 + 1)
                        {
                            debug::Debug(STR("Directory watcher thread is shutting down..."));
                            break;
                        }
                        if (wait_status != WAIT_OBJECT_0)
                        {
                            debug::Error(STR("WaitForMultipleObjects failed"));
                            break;
                        }

                        debug::Debug2(STR("Change detected in:"), g_pak_dir.wstring());
                        // handle change
                        CommitStagedPaks(g_pak_dir);

                        if (!FindNextChangeNotification(h_dir_change))
                        {
                            debug::Error(STR("FindNextChangeNotification failed"));
                            break;
                        }
                    }
                    if (!FindCloseChangeNotification(h_dir_change))
                    {
                        debug::Error(STR("FindCloseChangeNotification failed"));
                        return 1;
                    }
                    return 0;
            }

            void MountPak(fs::path path, int priority)
            {
                FString ManualPakPath(path.wstring().c_str());
                if (g_mount(ManualPakPath, 1000+priority)) 
                {
                    std::string prioritySTR = std::to_string(priority);
                    std::string msg = "Mounted pak: ";
                    debug::Debug3(msg, path.string(), prioritySTR);
                }
                else
                {
                    debug::Error(STR("  Failed to mount pak. Try again later."));

                    if(!fs::exists(path))
                    {
                        debug::Error2(STR(" Pak not found, removing from list... "), path.string());
                        files::EraseFileLine(files::GetModLoadOrder(), path.string());
                    }
                }
            }

            bool IsMounted(fs::path my_pak)
            {
                for (int i = 0; i < g_mount_delegate_ptr->pak->PakFiles.Num(); i++)
                {
                    FPakListEntry entry = g_mount_delegate_ptr->pak->PakFiles[i];
                    fs::path mounted_pak(entry.PakFile->PakFilename.GetCharArray());
                    if (fs::equivalent(my_pak, mounted_pak)) { return true; }
                }
                return false;
            }

            enum class CommitAction
            {
                HotSwap,
                RenameAndMount,
                MountOnly,
            };

            bool UnmountAll()
            {
                debug::Warn(STR("UNMOUNTING ALL PAKS!"));

                if (!g_mount || !g_unmount)
                {
                    debug::Error(STR("Pak routines are not callable. Aborting commit."));
                    return false;;
                }   

                //Unmount paks from ModLoadOrder.txt
                std::ifstream LoadOrderFile(files::GetModLoadOrder());
                for( std::string line; std::getline( LoadOrderFile, line ); )
                {
                    fs::path src =  files::GetModFolder() / line;
                    FString ManualPakPath(src.wstring().c_str());
                    if (g_unmount(ManualPakPath)) 
                    {
                        debug::Debug2(STR(" Unmounted pak: "), src.string());
                    }
                    else
                    {
                        debug::Error(STR("  Failed to unmount pak. Try again later."));

                        if(!fs::exists(src))
                        {
                            debug::Error2(STR(" Pak not found, removing from list... "), line);
                            files::EraseFileLine(files::GetModLoadOrder(), line);
                        }
                    }
                }

                return true;
            }

            void RemountAll()
            {
                debug::Warn(STR("MOUNTING ALL PAKS!"));

                if (!g_mount || !g_unmount)
                {
                    debug::Error(STR("Pak routines are not callable. Aborting commit."));
                    return;
                }

                int index = 1000;

                //Mount paks in order from ModLoadOrder.txt
                std::ifstream LoadOrderFile(files::GetModLoadOrder());
                std::vector<std::string> lines_in_reverse;
                for( std::string line; std::getline( LoadOrderFile, line ); )
                {
                    // Stores the lines in reverse order
                    lines_in_reverse.insert(lines_in_reverse.begin(), line);
                }

                for(std::string line : lines_in_reverse)
                {
                    fs::path src =  files::GetModFolder() / line;
                    MountPak(src, index);
                    index++;
                }
            }

            void CommitStagedPaks(fs::path pak_dir)
            {
                if (!g_mount || !g_unmount)
                {
                    debug::Error(STR("Pak routines are not callable. Aborting commit."));
                    return;
                }
                std::error_code err;
                int num_tries = 0;
                std::vector<std::tuple<fs::path, CommitAction>> pak_paths;

                int index = 1000;

                //Mount paks in order from ModLoadOrder.txt
                std::ifstream LoadOrderFile(files::GetModLoadOrder());
                std::vector<std::string> lines_in_reverse;
                for( std::string line; std::getline( LoadOrderFile, line ); )
                {
                    // Stores the lines in reverse order
                    lines_in_reverse.insert(lines_in_reverse.begin(), line);
                }

                for(std::string line : lines_in_reverse)
                {
                    fs::path src =  files::GetModFolder() / line;
                    MountPak(src, index);
                    index++;
                }

                // If pak is not already in ModLoadOrder.txt -> Mount pak and add it to end of ModLoadOrder.txt
                for (const auto& dir_entry : fs::recursive_directory_iterator(pak_dir))
                {
                    if (!dir_entry.is_regular_file()) { continue; }
                    fs::path src = dir_entry.path();
                    if (dir_entry.path().extension() == ".pak")
                    {
                        if (!IsMounted(src))
                        {
                            debug::Debug2(STR("Found pak that is not already mounted:"), src.wstring());
                            debug::Debug(STR("Will mount."));
                            pak_paths.push_back(std::make_tuple(src, CommitAction::MountOnly));

                            // Adds pak to end of ModLoadOrder.txt
                            std::ofstream file;
                            file.open(files::GetModLoadOrder(), std::ios::app);
                            if (!file.is_open()) 
                            { 
                                debug::Error(STR("Error opening ModLoadOrder.txt!!!"));
                            } 
                            else 
                            {
                                debug::Debug2(STR("Adding pak to list: "), dir_entry.path().filename().string());
                                file << dir_entry.path().filename().string() << std::endl;
                            }
                        }
                        else
                        {
                            debug::Debug2(STR("Found mounted pak:"), src.wstring());
                        }
                    }
                    else if (dir_entry.path().extension() == ".staged")
                    {
                        fs::path dst(src);
                        dst.replace_filename(src.stem());
                        fs::directory_entry dst_entry(dst);
                        if (fs::exists(dst))
                        {
                            debug::Debug2(STR("Found staged changes for:"), dst.filename().wstring());
                            debug::Debug(STR("Will hot swap."));
                            pak_paths.push_back(std::make_tuple(src, CommitAction::HotSwap));
                        }
                        else
                        {
                            debug::Debug2(STR("Found staged file without counterpart:"), src.filename().wstring());
                            debug::Debug(STR("Will rename and mount."));
                            pak_paths.push_back(std::make_tuple(src, CommitAction::RenameAndMount));
                        }
                    }
                }
                for (const auto& t : pak_paths)
                {
                    const auto& src = std::get<fs::path>(t);
                    const auto& action = std::get<CommitAction>(t);
                    fs::path dst(src);
                    dst.replace_filename(src.stem());
                    FString fstr_dst(dst.wstring().c_str());
                    FString PakPath(src.wstring().c_str());
                    const int max_retries = 10;
                    int num_retries = 0;
                    debug::Debug2(STR("Working on:"), dst.filename().wstring());
                    switch (action)
                    {
                    case CommitAction::HotSwap:
                        if (g_unmount(fstr_dst))
                        {
                            debug::Debug(STR("  Unmounted pak."));
                        }
                        else
                        {
                            debug::Warn(STR("  Failed to unmount pak. Attempting to proceed..."));
                        }

                        num_retries = 0;
                        err.clear();
                        debug::Debug(STR("  Deleting pak..."));
                        while (num_retries < max_retries)
                        {
                            fs::remove(dst, err);
                            if (!err) {
                            break;
                            }
                            debug::Warn(STR("  Delete failed. Sleeping for 1s and trying again..."));
                            num_retries++;
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                        }
                        if (num_retries == max_retries) {
                            debug::Error(STR("  Delete failed. Aborting..."));
                            continue;
                        }

                        // Renaming is more likely to succeed with a bit of buffer time.
                        std::this_thread::sleep_for(std::chrono::milliseconds(200));

                        // fallthrough
                    case CommitAction::RenameAndMount:
                        err.clear();
                        debug::Debug(STR("  Renaming staged pak..."));
                        fs::rename(src, dst, err);
                        while (err)
                        {
                            debug::Warn(STR("  Rename failed. Sleeping for 200ms and trying again..."));
                            std::this_thread::sleep_for(std::chrono::milliseconds(200));
                            fs::rename(src, dst, err);
                        }

                        // fallthrough
                    case CommitAction::MountOnly:
                        if (g_mount(PakPath, 1000)) 
                        {
                            debug::Debug(STR("  Mounted pak."));
                        }
                        else
                        {
                            debug::Error(STR("  Failed to mount pak. Try again later."));
                        }
                        // fallthrough
                    }
                }
            }

            void Update(){}

            void Reset()
            {
                if (gh_dir_watcher_thread != NULL)
                {
                    debug::Debug(STR("Asking directory watcher thread to shut itself down..."));
                    SetEvent(gh_thread_exit_event);
                    DWORD wait_status = WaitForSingleObject(gh_dir_watcher_thread, 10000);
                    if (wait_status == WAIT_TIMEOUT)
                    {
                        debug::Error(STR("Directory watcher thread did not shut down after 10 seconds. ")
                            STR("Terminating."));
                        if (!TerminateThread(gh_thread_exit_event, 1))
                        {
                            debug::Error(STR("Something went wrong while forcibly terminating the thread."));
                            throw;
                        }
                    }
                    else if (wait_status != WAIT_OBJECT_0)
                    {
                        debug::Error(STR("Something went wrong while waiting for thread to shut down."));
                        throw;
                    }
                    debug::Debug(STR("Directory watcher thread has shut down."));
                }

                if (!CloseHandle(gh_thread_exit_event))
                {
                    debug::Error(STR("Something went wrong while closing the thread exit event."));
                    throw;
                }
                debug::Debug(STR("Closed thread exit event."));
            }

            void Init()
            {
                if (gh_thread_exit_event != NULL) { debug::Warn(STR("Recreating ThreadExitEvent even though it already exists.")); }
                gh_thread_exit_event = CreateEvent(NULL, // default security attributes
                                                TRUE, // manual-reset event
                                                FALSE, // initial state is nonsignaled
                                                TEXT("ThreadExitEvent") // object name
                );
                if (gh_thread_exit_event == NULL) { debug::Error(STR("Failed to create ThreadExitEvent")); }

                fs::path working_dir = UE4SSProgram::get_program().get_working_directory();
                g_pak_dir = working_dir.parent_path().parent_path() / "Mercury" / "Mods";
                if (!fs::exists(g_pak_dir))
                {
                    debug::Error2(STR("Mods directory does not exist:"), g_pak_dir.wstring());

                    debug::Error(STR("Creating Mods directory..."));
                    
                    fs::create_directories(g_pak_dir);
                    return;
                }
            }

            void ScanForPakRoutines()
            {
                if (g_mount && g_unmount) { debug::Warn(STR("Mount and Unmount routines already found; rescanning anyway")); }
                // Signature for FPakPlatformFile dtor in UE 4.27
                SignatureData sig{"40 53 56 57 48 83 ec 20 48 8d 05 ?? ?? ?? ?? 4c 89 74 24 50 48 89 01 48 8b f9 e8 ?? ?? ?? ?? 48 8b c8"};
                std::vector<RC::SignatureData> sigs = {sig};
                RC::SignatureContainer container(sigs, OnMatchFound, OnScanFinished);
                RC::SinglePassScanner::SignatureContainerMap container_map{{ScanTarget::Core, {container}}};
                debug::Debug(STR("Scanning for Mount and Unmount routines..."));
                RC::SinglePassScanner::start_scan(container_map);
            }

        } //namespace hotloading
    }
}