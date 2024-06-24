#pragma once

#include <chrono>
#include <thread>
#include <filesystem>

#include <utilities/debug.hpp>

namespace fs = std::filesystem;
namespace debug = MMM::utilities::debug;

namespace MMM
{
    using namespace fs;

    namespace utilities
    {
        namespace files
        {
            std::vector<std::string> GetDirectories(std::string s)
            {
                std::vector<std::string> r;
                std::string path = MMM::utilities::debug::ReplaceAll(s, "/", R"(//)");

                for (auto& p : fs::directory_iterator(path)) 
                {
                    if (p.is_directory())
                    {
                        r.push_back(p.path().string());
                    }
                }

                return r;
            }

            std::string GetUE4SSModsFolderString() 
            {
                return fs::current_path().generic_string() + "/Mods";
            }

            fs::path GetModFolder() 
            {
                fs::path working_dir = UE4SSProgram::get_program().get_working_directory();
                fs::path dir = working_dir.parent_path().parent_path() / "Mercury" / "Mods";

                return dir;
            }

            std::vector<std::string> GetMods() 
            {
                std::string modsDirectory = GetUE4SSModsFolderString();
                return GetDirectories(modsDirectory); 
            }

            fs::path GetModLoadOrder() {
                fs::path working_dir = UE4SSProgram::get_program().get_working_directory();
                fs::path dir = working_dir.parent_path().parent_path() / "Mercury" / "ModLoadOrder.txt";
                return dir;
            }

            void EraseFileLine(fs::path path, std::string eraseLine) {
                std::string line;
                std::ifstream fin;
                std::ofstream fout;
                
                fin.open(path);

                std::ofstream tout;
                tout.open("temp.txt");

                while (getline(fin, line)) {
                    if (line != eraseLine)
                        tout << line << std::endl;
                }

                fin.close();
                tout.close();
                
                fout.open(path, std::ios::trunc);

                std::ifstream tin;
                tin.open("temp.txt");

                while (getline(tin, line)) 
                {
                    fout << line << std::endl;
                }

                fout.close();
                tin.close();

                fs::remove("temp.txt");
            }


        } //namespace files
    }
}