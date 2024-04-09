-- premake5.lua

workspace "template"
   configurations { "Debug", "Release" }

project "template"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "**.h", "**.c", "**.cpp", "**.hpp"}

links {"raylib"} 

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"
