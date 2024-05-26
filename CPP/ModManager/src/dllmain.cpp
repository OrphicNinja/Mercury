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
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/AActor.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/FText.hpp>
#include <Unreal/BPMacros.hpp>
#include <Unreal/UFunction.hpp>

#include <curl/curl.h>
#include <nlohmann/json.hpp>

#include <utilities.hpp>

namespace fs = std::filesystem;

using namespace Unreal;
using namespace RC;
using namespace fs;
using json = nlohmann::json;

std::wstring ConvertStringToWstring(std::string string)
{
    std::wstring wsTemp = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(string);
    return wsTemp;
}

std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

std::string UE4SSModsFolderString() {
    return fs::current_path().generic_string() + "/Mods/";
}

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

std::vector<std::string> GetDirectories(std::string s)
{
    std::vector<std::string> r;
    std::string path = ReplaceAll(s, "/", R"(//)");

    for (auto& p : fs::directory_iterator(path))
    {
        if (p.is_directory())
        {
            r.push_back(p.path().string());
        }
    }

    return r;
}

std::vector<std::string> GetMods() {
    std::string modsDirectory = UE4SSModsFolderString();
    return GetDirectories(modsDirectory);
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
            Output::send<LogLevel::Warning>(STR("[ModManager]: CURL error: {}\n"), ConvertStringToWstring(resString));
        }
    }

    curl_global_cleanup();

    std::string latestVersion = result;
    return  latestVersion;
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
    bool UpdateMod_function_hooked = false;

    ModManager() : CppUserModBase()
    {
        ModName = STR("ModManager");
        ModVersion = STR("0.0.1");
        ModDescription = STR("Moolah Mod Manager");
        ModAuthors = STR("Nadz");
        MMM::utilities::debug::Warn(STR("Init."));
        

        MMM::utilities::hotloading::Init();
    }

    ~ModManager() override
    {
        MMM::utilities::hotloading::Reset();
    }

    auto on_update() -> void override
    {
    }

    
    
    auto on_unreal_init() -> void override
    {       
        MMM::utilities::hotloading::ScanForPakRoutines();

        Hook::RegisterBeginPlayPostCallback([&](AActor* actor) {
                auto CheckForUpdates = [](UnrealScriptFunctionCallableContext& context, void* customdata)
                {
                    MMM::utilities::debug::Warn(STR("Checking For Updates..."));

                    std::vector<std::string> foundMods = GetMods();

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
                                    Output::send<LogLevel::Warning>(STR("[ModManager]: Missing MWS or NexusMods ID in: {}\n"), ConvertStringToWstring(name));
                                }

                                if (version != GetLatestModVersion(modid))
                                {
                                    Output::send<LogLevel::Warning>(STR("[ModManager]: Found Outdated Mod: {}\n"), ConvertStringToWstring(name));

                                    int temp = OutdatedModsCount + 1;
                                    UpdateOutdatedModsCount(temp);
                                }
                            }
                        }
                    }

                    //Update UI in menu
                    //FText count = FText(STR(std::to_string(OutdatedModsCount)));
                    //FText test = FText(STR("1"));
                    auto OutdatedMods_in_Blueprint = BP_ModManager->GetValuePtrByPropertyName<int>(STR("OutdatedMods"));
                    *OutdatedMods_in_Blueprint = static_cast<int>(OutdatedModsCount);
                    Output::send<LogLevel::Warning>(STR("[ModManager]: Outdated Mod in BP: {}\n"), *OutdatedMods_in_Blueprint);
                };

                auto EmptyFunction = [](UnrealScriptFunctionCallableContext& context, void* customdata){};

                if (actor->GetName().starts_with(STR("BP_ModManager")))
                {
                    BP_ModManager = actor;
                    
                    if (!CheckForUpdate_function_hooked)
                    {
                        UFunction* checkForUpdates_in_blueprint = actor->GetFunctionByName(L"CheckForUpdates");
                        Unreal::UObjectGlobals::RegisterHook(checkForUpdates_in_blueprint, EmptyFunction, CheckForUpdates, nullptr);
                        Output::send<LogLevel::Warning>(STR("[ModManager]: Hooking CheckForUpdates function...\n"));
                        CheckForUpdate_function_hooked = true;
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
