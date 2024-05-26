includes("dependencies/RE-UE4SS")

add_requires("libcurl", {configs = {shared = false}})

local projectName = "ModManager"

target(projectName)
    set_kind("shared")
    set_languages("cxx20")
    set_exceptions("cxx")
    add_packages("libcurl")

    add_includedirs("./src")
    add_includedirs("./dependencies/nlohmann-json/single_include")
    add_includedirs("./dependencies/curl-8.7.1/x64 Release/include")
    
    add_files("./src/dllmain.cpp")

    add_deps("UE4SS")

    on_load(function (target)
        import("build_configs", { rootdir = get_config("scriptsRoot") })
        build_configs:set_output_dir(target)
    end)
    
    on_config(function (target)
        import("build_configs", { rootdir = get_config("scriptsRoot") })
        build_configs:config(target)
    end)
    
    after_clean(function (target)
        import("build_configs", { rootdir = get_config("scriptsRoot") })
        build_configs:clean_output_dir(target)
    end)