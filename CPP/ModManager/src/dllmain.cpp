/*
    
.___  ___.  _______ .______        ______  __    __  .______     ____    ____ 
|   \/   | |   ____||   _  \      /      ||  |  |  | |   _  \    \   \  /   / 
|  \  /  | |  |__   |  |_)  |    |  ,----'|  |  |  | |  |_)  |    \   \/   /  
|  |\/|  | |   __|  |      /     |  |     |  |  |  | |      /      \_    _/   
|  |  |  | |  |____ |  |\  \----.|  `----.|  `--'  | |  |\  \----.   |  |     
|__|  |__| |_______|| _| `._____| \______| \______/  | _| `._____|   |__|     

                                                            Made By Nadz        

Mercury Mod Manager aims to make installing mods in PAYDAY 3 simpler and centralized. The mod manager allows players to place UE4SS C++, 
LUA and Pak mods all in one directory. It also allows for mod loading orders and updating mods directly from within the game.

Currently this has been written with a proof of concept mindset, meaning if I got it to work then I wouldn't touch it unless necassary.
For v1.0.0 I intend to refactor the code, making it more readable and removing anything uncessary, while commenting as much as I can 
so that others can easily see how this works. 

TODO for V1.0.0:
- Download Manager functions
    - Downloading updated versions of mods from MWS or Nexus
    - Renaming the paks with '.staged' suffix and moving the pak to /Mercury/Mods
    - Update UMG progress bar value with CURL download progress value

- Mod Settings
    - This can all be done in blueprints by adjusting the current modloader to allow for mod makers to add UI variables in the modmeta
    - We can then retrieve these variables from the parsed modmeta and create a new mod setting widget for each variable

- Mod Loading
    - Fix some paks not being affected by load order and unmounting.

- Refactor all current code; removing anything that isn't needed, commenting what functions do and moving common functions to seperate hpp classes

*/

#pragma once

#define CURL_STATICLIB

#include <stdio.h>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <locale>
#include <codecvt>
#include <vector>
#include <DynamicOutput/Output.hpp>
#include <Mod/CppUserModBase.hpp>

#include <Unreal/Hooks.hpp>
#include <Unreal/AActor.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/UClass.hpp>

#include <Unreal/UFunction.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/FString.hpp>
#include <Unreal/Core/Containers/Array.hpp>

#include <nlohmann/json.hpp>

#include <utilities/hotloading.hpp>

namespace fs = std::filesystem;

namespace debug = MMM::utilities::debug;
namespace files = MMM::utilities::files;
namespace http = MMM::utilities::http;
namespace hotloading = MMM::utilities::hotloading;

using namespace Unreal;
using namespace RC;
using namespace RC::Unreal;

using namespace fs;
using json = nlohmann::json;


bool InitialisePakMods() 
{
    bool ShouldWriteToText = false;

    // If ModLoadOrder.txt doesn't already exist -> Create it
    if(!fs::exists(files::GetModLoadOrder()))
    {
        std::ofstream file;
        file.open(files::GetModLoadOrder());
        file.close();
        ShouldWriteToText = true;
    }

    // Iterates through all directories in /Win64/Mods for any .paks -> If found, moves the .pak to /Mercury/Mods (ready for manual mounting)
    fs::path working_dir = UE4SSProgram::get_program().get_working_directory();
    fs::path dir = working_dir.parent_path().parent_path() / "Binaries" / "Win64" /"Mods";
    std::vector<std::string> foundMods = files::GetDirectories(dir.string());

    for (auto i : foundMods)
    {
        for (auto& dir_entry : fs::recursive_directory_iterator(i))
        {
            if (!dir_entry.is_regular_file()) { continue; }
            if (dir_entry.path().extension() == ".pak")
            {
                fs::path pak = dir_entry.path();
                fs::path newDir = files::GetModFolder() / pak.filename();
                if (fs::exists(newDir))
                {
                    if(fs::remove(newDir))
                    {
                        if (fs::copy_file(pak, newDir))
                        {
                            debug::Warn2(pak.string(), STR(" moved to /Mods"));
                        }
                    }
                }
                else
                {
                    if (fs::copy_file(pak, newDir))
                    {
                        debug::Warn2(pak.string(), STR(" moved to /Mods"));
                    }
                }
            }
        }
    }

    // Adds each pak to ModLoadOrder.txt in default order
    if(ShouldWriteToText)
    {
        std::ofstream file;
        file.open(files::GetModLoadOrder());
        if (!file.is_open()) 
        { 
            debug::Error(STR("Error opening ModLoadOrder.txt!!!"));
        } 
        else 
        {
            std::string path = files::GetModFolder().string();
            std::vector<std::string> mods;

            for (auto& p : fs::directory_iterator(path)) 
            {
                if (!p.is_regular_file()) { continue; }
                if (p.path().extension() == ".pak")
                {
                    debug::Debug2(STR("Adding pak to list: "), p.path().filename().string());
                    file << p.path().filename().string() << std::endl;
                }
            }
            
        }
        file.close();
    }

    ShouldWriteToText = false;
    return true;
}


UObject* BP_ModManager; 

int OutdatedModsCount;
void UpdateOutdatedModsCount(int newCount)
{
    OutdatedModsCount = newCount;
}


class ModManager : public RC::CppUserModBase
{
public:
    

    bool CheckForUpdate_function_hooked = false;
    bool RefreshLoadOrder_function_hooked = false;
    bool UpdateMod_function_hooked = false;

    ModManager() : CppUserModBase()
    {
        ModName = STR("ModManager");
        ModVersion = STR("0.0.2");
        ModDescription = STR("Mercury Mod Manager");
        ModAuthors = STR("Nadz");
        debug::Warn(STR("Init."));
        if (InitialisePakMods())
        {
            hotloading::Init();
        }

    }

    ~ModManager() override
    {
        hotloading::Reset();
    }

    auto on_update() -> void override{}


    auto on_unreal_init() -> void override
    {       
        hotloading::ScanForPakRoutines();

        Hook::RegisterBeginPlayPostCallback([&](AActor* actor) {
                auto CheckForUpdates = [](UnrealScriptFunctionCallableContext& context, void* customdata)
                {
                    debug::Warn(STR("Checking For Updates..."));

                    UpdateOutdatedModsCount(0); 

                    // Iterates through all mods in /Win64/Mods looking for a pd3mod.json (Used as meta for Mercury mods) -> If found
                    // parses through the data looking for the ID and version -> Compares version with MWS or Nexus Mods version of the 
                    // mod -> If versions are not the same, increment outdated mods count in BP_ModManager and create widget for mod in
                    // download manager list 
                    std::vector<std::string> foundMods = files::GetMods(); 
                    for (auto i : foundMods)
                    {
                        for (auto& l : fs::directory_iterator(i))
                        {
                            if (l.path().filename() == "pd3mod.json")
                            {
                                std::ifstream f(l.path());
                                json data = json::parse(f);

                                std::string name = data["id"];
                                std::string modid;
                                std::string version = data["version"];

                                if (data["mwsid"] != "")
                                {
                                    modid = data["mwsid"];
                                }
                                else if (data["nexusid"] != "")
                                {
                                    modid = data["nexusid"];
                                }
                                else
                                {
                                    debug::Warn2(STR("Missing MWS or NexusMods ID in: "), name);
                                }

                                if (version != http::GetLatestModVersion(modid))
                                {
                                    debug::Debug2(STR("Found Outdated Mod: "), name);

                                    int temp = OutdatedModsCount + 1;
                                    UpdateOutdatedModsCount(temp);
                                }
                            }
                        }
                    }

                    //Update UI in menu
                    auto OutdatedMods_in_Blueprint = BP_ModManager->GetValuePtrByPropertyName<int>(STR("OutdatedMods"));
                    *OutdatedMods_in_Blueprint = static_cast<int>(OutdatedModsCount);
                };

                auto RefreshLoadOrder = [](UnrealScriptFunctionCallableContext& context, void* customdata)
                {
                    debug::Warn(STR("Refreshing Load Order..."));

                    //Iterates through each pak in the draggable load order list and sets the ModLoadOrder.txt to the updated order
                    auto PakStringsArray = BP_ModManager->GetValuePtrByPropertyName<TArray<FString>>(STR("PakStrings"));
                    auto ArraySize = PakStringsArray->Num();
                    if(ArraySize > 0)
                    {
                        bool ShouldWriteToText = true;
                        std::ofstream file;
                        file.open(files::GetModLoadOrder(), std::ios::out | std::ios::trunc);
                        if (!file.is_open()) 
                        { 
                            debug::Error(STR("Error opening ModLoadOrder.txt!!!"));
                        }
                        else
                        {
                            if(ShouldWriteToText)
                            {
                                for (int i = 0; i < ArraySize; i++) 
                                {
                                    debug::Debug2(STR("Adding pak to list: "), PakStringsArray->operator[](i).GetCharArray());
                                    std::wstring ws(PakStringsArray->operator[](i).GetCharArray());
                                    std::string toWrite(ws.begin(), ws.end());
                                    file << toWrite << std::endl;
                                }
                                ShouldWriteToText = false;
                            }
                        }
                        file.close();
                    }

                    std::ifstream file(files::GetModLoadOrder());
                    for( std::string line; std::getline( file, line ); )
                    {
                        UFunction* AddPakToLoadOrderList_In_BP = BP_ModManager->GetFunctionByName(L"AddPakToLoadOrderList");
                        static auto ParamStructSize = AddPakToLoadOrderList_In_BP->GetParmsSize();
                        auto ParamData = static_cast<uint8*>(_malloca(ParamStructSize));
                        FMemory::Memzero(ParamData, ParamStructSize);
                        auto PakNameProperty = AddPakToLoadOrderList_In_BP->FindProperty(FName(STR("PakName")));
                        FString PakName = FString(debug::ConvertStringToWstring(line).c_str());
                        *std::bit_cast<FString*>(&ParamData[PakNameProperty->GetOffset_Internal()]) = static_cast<FString>(PakName);
                        BP_ModManager->ProcessEvent(AddPakToLoadOrderList_In_BP, ParamData);
                    }

                    if (hotloading::UnmountAll())
                    {
                        hotloading::RemountAll();
                    }
                };

                auto EmptyFunction = [](UnrealScriptFunctionCallableContext& context, void* customdata){};

                if (actor->GetName().starts_with(STR("BP_ModManager")))
                {
                    BP_ModManager = actor;
                    
                    if (!CheckForUpdate_function_hooked)
                    {
                        UFunction* checkForUpdates_in_blueprint = actor->GetFunctionByName(L"CheckForUpdates");
                        Unreal::UObjectGlobals::RegisterHook(checkForUpdates_in_blueprint, EmptyFunction, CheckForUpdates, nullptr);
                        debug::Debug(STR("Hooking CheckForUpdates function..."));
                        CheckForUpdate_function_hooked = true;
                    } 

                    if (!RefreshLoadOrder_function_hooked)
                    {
                        UFunction* refreshLoadOrder_in_blueprint = actor->GetFunctionByName(L"RefreshLoadOrder");
                        Unreal::UObjectGlobals::RegisterHook(refreshLoadOrder_in_blueprint, EmptyFunction, RefreshLoadOrder, nullptr);
                        debug::Debug(STR("Hooking RefreshLoadOrder function..."));
                        RefreshLoadOrder_function_hooked = true;
                    } 
                }
                
            }
        );
    }
}; //class



#define MOD_MANAGER_API __declspec(dllexport)
extern "C"
{
    MOD_MANAGER_API RC::CppUserModBase* start_mod()
    {
        return new ModManager();
    }

    MOD_MANAGER_API void uninstall_mod(RC::CppUserModBase* mod)
    {
        delete mod;
    }
}
