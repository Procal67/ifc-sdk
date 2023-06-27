project "Step"
    kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
    targetname "Step"

	targetdir "../../bin/%{cfg.buildcfg}"
    objdir "../../bin-int/%{cfg.buildcfg}/%{prj.name}"

    files { 
		"include/Step/**.h", 
		"src/Step/**.cpp"
	}

    includedirs {
        "include",
        "src/Step"
    }

    defines {
        "WIN32",
        "_WINDOWS",
        "MSVC_IDE"
    }

    filter "system:windows"
		systemversion "latest"
        defines {
            "UNICODE",
            "_UNICODE"
        }

	filter "configurations:Debug"
        optimize "Debug"
        runtime "Release"
		symbols "On"
        defines { "DEBUG" }

	filter "configurations:Release"
		optimize "On"

	filter "configurations:Dist"
		optimize "Full"

project "ifc2x3"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"
    staticruntime "off"
    targetname "ifc2x3"

	targetdir "../../bin/%{cfg.buildcfg}"
    objdir "../../bin-int/%{cfg.buildcfg}/%{prj.name}"
    
	pchheader "precompiled.h"
	pchsource "src/ifc2x3/ifc2x3_pch.cxx"

    files { 
        "include/ifc2x3/**.h", 
        "src/ifc2x3/**.cxx",
        "src/ifc2x3/**.cpp"
    }

    includedirs {
        "include",
        "src/ifc2x3"
    }

    defines {
        "WIN32",
        "_WINDOWS",
        "MSVC_IDE",
        "ENABLE_PRECOMPILED_HEADER",
        "ifc2x3_EXPORTS"
    }

    filter "system:windows"
        systemversion "latest"
        defines {
            "UNICODE",
            "_UNICODE"
        }

    filter "configurations:Debug"
        optimize "Debug"
        runtime "Release"
        symbols "On"
        defines { "DEBUG" }

    filter "configurations:Release"
        optimize "On"

    filter "configurations:Dist"
        optimize "Full"