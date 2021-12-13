project "WytEngine"
kind "StaticLib"
language "c++"
cppdialect "c++17"
staticruntime "on"

targetdir("../bin/" .. outputdir .. "/%{prj.name}")
objdir("../bin-obj/" .. outputdir .. "/%{prj.name}")

pchheader "pch.h"
pchsource "src/pch.cpp"

files
{
    "src/**.h",
    "src/**.cpp",
}

defines
{
    "_CRT_SECURE_NO_WARNINGS",
    "WYT_PLATFORM_WINDOWS",
}

includedirs
{
    "src",
    "vendor/spdlog/include",
    "%{IncludeDir.GLFW}"
}

links
{
    "GLFW",
    "opengl32.lib"
}

filter "system:windows"
    systemversion "latest"

    defines
    {
    
    }

filter "configurations:Debug"
    defines "_DEBUG"
    runtime "Debug"
    symbols "on"

filter "configurations:Release"
    defines "_RELEASE"
    runtime "Release"
    optimize "on"