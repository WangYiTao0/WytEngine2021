include "./3rdPart/premake/premake_customization/solution_items.lua"

workspace "WytEngine"
    architecture "x64"
    targetdir "build"
    startproject "Sandbox"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

    flags
    {
        "MultiProcessorCompile"
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to 
    IncludeDir = {}
    IncludeDir["GLFW"] = "WytEngine/vendor/GLFW/include"
 --%{wks.location}
LibraryDir = {}

-- Projects
group "Dependencies"
    include "3rdPart/premake"
group ""

include "WytEngine"
include "Sandbox"

