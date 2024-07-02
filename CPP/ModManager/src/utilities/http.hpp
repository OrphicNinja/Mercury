#pragma once

#define CURL_STATICLIB

#include <curl/curl.h>
#include <nlohmann/json.hpp>

#include <utilities/files.hpp>
#include <utilities/blueprint.hpp>

#include <elzip/elzip.hpp>

namespace blueprint = MMM::utilities::blueprint;

using json = nlohmann::json;


namespace MMM
{
    namespace utilities
    {
        namespace http
        {
            UObject* BP_ModManager; 

            static size_t WriteString(void* buffer, size_t size, size_t nmemb, void* param)
            {
                std::string& text = *static_cast<std::string*>(param);
                size_t totalsize = size * nmemb;
                text.append(static_cast<char*>(buffer), totalsize);
                return totalsize;
            }

            static size_t WriteFile(void* ptr, size_t size, size_t nmemb, FILE* stream) 
            {
                size_t written = fwrite(ptr, size, nmemb, stream);
                return written;
            }

            struct OutdatedMod
            {
                std::string modpath; 
                std::string name; 
                std::string modID;
                std::string currentVersion;
            };

            struct ModUpdating
            {
                OutdatedMod mod;
                double currentProgressPercent;
            };

            std::vector<ModUpdating> ModsUpdating;

            int progress_func(void* ptr, double TotalToDownload, double NowDownloaded, double TotalToUpload, double NowUploaded)
            {
                double downloadPercentage = NowDownloaded/TotalToDownload;

                ModUpdating &currentMod = *(static_cast<ModUpdating *>(ptr));
                currentMod.currentProgressPercent = downloadPercentage;
                ModsUpdating.push_back(currentMod);

                if(downloadPercentage > 0)
                {
                    blueprint::UpdateDownloadProgress(BP_ModManager, ModsUpdating);
                    return 0;
                }

                return 0;
            }

            std::string GetLatestModVersion(std::string modID)
            {
                std::string modURL = "https://api.modworkshop.net/mods/" + modID + "/version";
                const char* cmodURL = modURL.c_str();

                std::string result;
                CURL* curl;
                CURLcode res;
                std::string resString;

                curl_global_init(CURL_GLOBAL_DEFAULT);

                curl = curl_easy_init();
                if (curl)
                {
                    curl_easy_setopt(curl, CURLOPT_URL, cmodURL);
                    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteString);
                    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);

                    res = curl_easy_perform(curl);
                    resString = curl_easy_strerror(res);
                    curl_easy_cleanup(curl);

                    if (CURLE_OK != res)
                    {
                        debug::Error2("CURL Error :", debug::ConvertStringToWstring(resString));
                    }
                }

                curl_global_cleanup();

                std::string latestVersion = result;
                return  latestVersion;
            }

            void UpdateMod(json filesJson, OutdatedMod mod) 
            {
                std::string downloadURL = filesJson["data"][0]["download_url"];
                const char* cdownloadURL = downloadURL.c_str();

                std::string result;
                CURL* curl;
                CURLcode res;
                FILE* fp;

                ModUpdating currentMod;
                currentMod.mod = mod;

                std::string fileName = filesJson["data"][0]["name"];

                std::string outfilename_string = files::GetUE4SSModsFolderString() + "/" + fileName;

                curl = curl_easy_init();
                curl_easy_setopt(curl, CURLOPT_URL, cdownloadURL);
                curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteFile);

                fp = fopen(outfilename_string.c_str(), "wb"); //TODO: Switch to fopen_s 

                curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
                curl_easy_setopt(curl, CURLOPT_NOPROGRESS, FALSE);
                curl_easy_setopt(curl, CURLOPT_PROGRESSDATA, &currentMod);
                curl_easy_setopt(curl, CURLOPT_PROGRESSFUNCTION, progress_func); 

                res = curl_easy_perform(curl);
                // always cleanup 
                curl_easy_cleanup(curl);

                fclose(fp);

                //Extracts zip
                debug::Debug2("Extracting zip: ", outfilename_string);
                std::string archivePath = debug::ReplaceAll(outfilename_string, "/", R"(//)");
                std::string TargetDirPath = debug::ReplaceAll(files::GetUE4SSModsFolderString(), "/", R"(//)");

                elz::path archive{archivePath};
                elz::path TargetDir{TargetDirPath};

                debug::Debug(STR("{DETAILS ABOUT ZIP TO EXTRACT}"));
                debug::Debug2(STR("Archive: "), archivePath);
                debug::Debug2(STR("TargetDir: "), TargetDirPath);

                elz::extractZip(archive, TargetDir); 

                fs::remove(archive);

                // Iterates through all directories in /Win64/Mods for any .paks -> If found, moves the .pak to /Mercury/Mods (ready for manual mounting)
                std::vector<std::string> foundMods = files::GetDirectories(mod.modpath);
                for (auto i : foundMods)
                {
                    for (auto& dir_entry : fs::recursive_directory_iterator(i))
                    {
                        if (!dir_entry.is_regular_file()) { continue; }
                        if (dir_entry.path().extension() == ".pak")
                        {
                            fs::path pak = dir_entry.path();
                            std::string staged = (files::GetModFolder() / pak.filename()).generic_string() + ".staged";
                            fs::path newDir = staged;
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
            }


            void DownloadMod(OutdatedMod mod)
            {

                std::string fileURL = "https://api.modworkshop.net/mods/" + mod.modID + "/files";
                debug::Debug2("Downloading update from ", fileURL);
                const char* cfileURL = fileURL.c_str();

                std::string result;
                CURL* curl;
                CURLcode res;
                std::string resString;

                curl_global_init(CURL_GLOBAL_DEFAULT);

                curl = curl_easy_init();
                if (curl)
                {
                    curl_easy_setopt(curl, CURLOPT_URL, cfileURL);
                    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteString);
                    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);

                    res = curl_easy_perform(curl);
                    resString = curl_easy_strerror(res);
                    curl_easy_cleanup(curl);

                    if (CURLE_OK != res)
                    {
                        debug::Error2("CURL Error: ", resString);
                    }
                }

                curl_global_cleanup();

                auto filesJson_string = json::parse(result);
                json filesJson = filesJson_string;
                
                UpdateMod(filesJson, mod);
            }

            void TryUpdateMod(OutdatedMod mod)
            {
                if (mod.currentVersion != GetLatestModVersion(mod.modID))
                {
                    debug::Debug2("Trying to update ", mod.name);
                    DownloadMod(mod);
                }
            }
            
        } //namespace http
    }
}