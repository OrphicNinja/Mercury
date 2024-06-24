#pragma once

#include <DynamicOutput/Output.hpp>
#include <Mod/CppUserModBase.hpp>
#include <UE4SSProgram.hpp>

#include <chrono>

namespace MMM
{
    using namespace RC;

    namespace utilities
    {
        namespace debug
        {
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

            inline const char * const BoolToString(bool b)
            {
                return b ? "true" : "false";
            }

            void delay(int seconds)
            {
                std::this_thread::sleep_for(std::chrono::seconds(seconds));
            }

            //UE4SS Debug Console outputs
            void Error(std::wstring msg)
            {
                Output::send<LogLevel::Error>(STR("[Mod Manager]: {}\n"), msg);
            }
            void Error(std::string msg)
            {
                Output::send<LogLevel::Error>(STR("[Mod Manager]: {}\n"), ConvertStringToWstring(msg));
            }
            void Error2(std::wstring a, std::wstring b)
            {
                Output::send<LogLevel::Error>(STR("[Mod Manager]: {} {}\n"), a, b);
            }
            void Error2(std::string a, std::wstring b)
            {
                Output::send<LogLevel::Error>(STR("[Mod Manager]: {} {}\n"), ConvertStringToWstring(a), b);
            }
            void Error2(std::wstring a, std::string b)
            {
                Output::send<LogLevel::Error>(STR("[Mod Manager]: {} {}\n"), a, ConvertStringToWstring(b));
            }
            void Error2(std::string a, std::string b)
            {
                Output::send<LogLevel::Error>(STR("[Mod Manager]: {} {}\n"), ConvertStringToWstring(a), ConvertStringToWstring(b));
            }
            void Warn(std::wstring msg)
            {
                Output::send<LogLevel::Warning>(STR("[Mod Manager]: {}\n"), msg);
            }
            void Warn(std::string msg)
            {
                Output::send<LogLevel::Warning>(STR("[Mod Manager]: {}\n"), ConvertStringToWstring(msg));
            }
            void Warn2(std::wstring a, std::wstring b)
            {
                Output::send<LogLevel::Warning>(STR("[Mod Manager]: {} {}\n"), a, b);
            }
            void Warn2(std::string a, std::wstring b)
            {
                Output::send<LogLevel::Warning>(STR("[Mod Manager]: {} {}\n"), ConvertStringToWstring(a), b);
            }
            void Warn2(std::wstring a, std::string b)
            {
                Output::send<LogLevel::Warning>(STR("[Mod Manager]: {} {}\n"), a, ConvertStringToWstring(b));
            }
            void Warn2(std::string a, std::string b)
            {
                Output::send<LogLevel::Warning>(STR("[Mod Manager]: {} {}\n"), ConvertStringToWstring(a), ConvertStringToWstring(b));
            }
            void Debug(std::wstring msg)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {}\n"), msg);
            }
            void Debug(std::string msg)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {}\n"), ConvertStringToWstring(msg));
            }
            void Debug2(std::wstring a, std::wstring b)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {}\n"), a, b);
            }
            void Debug2(std::string a, std::wstring b)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {}\n"), ConvertStringToWstring(a), b);
            }
            void Debug2(std::wstring a, std::string b)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {}\n"), a, ConvertStringToWstring(b));
            }
            void Debug2(std::string a, std::string b)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {}\n"), ConvertStringToWstring(a), ConvertStringToWstring(b));
            }
            void Debug3(std::wstring a, std::wstring b, std::wstring c)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {} {}\n"), a, b, c);
            }
            void Debug3(std::string a, std::wstring b, std::wstring c)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {} {}\n"), ConvertStringToWstring(a), b, c);
            }
            void Debug3(std::string a, std::string b, std::wstring c)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {} {}\n"), ConvertStringToWstring(a), ConvertStringToWstring(b), c);
            }
            void Debug3(std::string a, std::string b, std::string c)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {} {}\n"), ConvertStringToWstring(a), ConvertStringToWstring(b), ConvertStringToWstring(c));
            }
            void Debug2(std::wstring msg, void* ptr)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {}\n"), msg, ptr);
            }
            void Debug3(std::wstring msg, void* ptr, int num)
            {
                Output::send<LogLevel::Verbose>(STR("[Mod Manager]: {} {} ({})\n"), msg, ptr, num);
            }

            
        } //namespace debug
    }
}