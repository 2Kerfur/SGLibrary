workspace "SGLibrary"
	architecture "x64"

	configurations  
	{
		"Debug",
		"Release",
		"Dist"
	}
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "SGLibrary"
	location "SGLibrary"
	--kind "SharedLib"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/SGLibrary/src/**.h",
		"%{prj.name}/SGLibrary/src/**.cpp"
	}

	includedirs
	{
	}

	links
	{
		
	}

	defines 
		{
			"SGL_PLATFORM_WINDOWS",
			"SGL_BUILD_DLL"
		}

	filter "system:windows"

		systemversion "latest"


		filter "configurations:Debug"
		defines "SGL_DEBUG"
		runtime "Debug"
		symbols "on"

		filter "configurations:Release"
		defines "SGL_RELEASE"
		runtime "Release"
		optimize "on"

		filter "configurations:Dist"
		defines "SGL_DIST"
		runtime "Release"
		optimize "on"


project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	staticruntime "on"
	cppdialect "C++17"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/Sandbox/src/**.h",
		"%{prj.name}/Sandbox/src/**.cpp"
	}

	includedirs
	{
		"SGLibrary/src"
	}

	links
	{
		"SGLibrary"
	}

	filter "system:windows"
		systemversion "latest"

		defines 
		{
			"SGL_PLATFORM_WINDOWS"
		}

		filter "configurations:Debug"
		symbols "on"

		filter "configurations:Release"
		optimize "on"

		filter "configurations:Dist"
		optimize "on"
		