-- premake5.lua

workspace "drawing"
   configurations { "Debug", "Release" }

project "drawing"
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
