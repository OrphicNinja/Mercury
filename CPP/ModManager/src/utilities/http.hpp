#pragma once

#include <curl/curl.h>
#include <utilities/files.hpp>

namespace MMM
{
    namespace utilities
    {
        namespace http
        {
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
                        MMM::utilities::debug::Warn2(STR("CURL Error :"), MMM::utilities::debug::ConvertStringToWstring(resString));
                    }
                }

                curl_global_cleanup();

                std::string latestVersion = result;
                return  latestVersion;
            }

            

            
        } //namespace http
    }
}