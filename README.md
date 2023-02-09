# SDL Library in Visual Studio 2022

## About SDL

Simple DirectMedia Layer is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via OpenGL and Direct3D. It is used by video playback software, emulators, and popular games including Valve's award winning catalog and many Humble Bundle games. SDL officially supports Windows, macOS, Linux, iOS, and Android. Support for other platforms may be found in the source code. SDL is written in C, works natively with C++, and there are bindings available for several other languages, including C# and Python. SDL 2.0 is distributed under the zlib license. This license allows you to use SDL freely in any software.

* https://www.libsdl.org/

* https://github.com/libsdl-org/SDL/releases

* https://github.com/libsdl-org/SDL_image/releases

## Getting Started With SDL  

* https://github.com/libsdl-org/SDL/releases/download/release-2.26.3/SDL2-devel-2.26.3-VC.zip

* https://github.com/libsdl-org/SDL_image/releases/download/release-2.6.3/SDL2_image-devel-2.6.3-VC.zip

## How to create first C/C++ application using SDL library.

* To get started using SDL, you'll first need to download SDL2-devel-2.26.3-VC.zip. If you're using Windows, all you need is the development package. 

* As of writing this tutorial, that file was named SDL2-devel-2.26.3-VC.zip.
 
* Download this file and unzip it to a folder, I like to use "C:\SDL2-2.26.3".

* Now that you have installed the development package, the documentation is available at "C:\SDL2-2.26.3\docs\index.html".

* You'll second need to download SDL2_image-devel-2.6.3-VC.zip. If you're using Windows, all you need is the development package.

* As of writing this tutorial, that file was named SDL2_image-devel-2.6.3-VC.zip.
 
* Download this file and unzip it to a folder, I like to use "C:\SDL2_image-2.6.3".

## Creating and configuring a SDL project

The first thing to do is choose what kind of project to create. It is recommended to select "Empty Project". The dialog window offers a few other options to customize the project: select "Console application" or "Windows application" only if you know how to use pre-compiled headers. For the purpose of this tutorial, you should create a main.cpp file and add it to the project, so that we have access to the C++ settings (otherwise Visual Studio doesn't know which language you're going to use for this project). We'll explain what to put inside later.

Now we need to tell the compiler where to find the SDL headers (.hpp files), and the linker where to find the SDL libraries (.lib files).

## In the project's properties, add:

* The path to the SDL headers (<sdl-install-path>\include) to C/C++ » General » Additional Include Directories

These paths are the same in both Debug and Release configuration, so you can set them globally for your project ("All configurations").
  
Additional Dependencies - Debug - Win32

C:\SDL2_image-2.6.3\include;C:\SDL2-2.26.3\include;%(AdditionalIncludeDirectories)
  
Additional Dependencies - Release - Win32  

C:\SDL2_image-2.6.3\include;C:\SDL2-2.26.3\include;%(AdditionalIncludeDirectories)
 
* The path to the SDL libraries (<sdl-install-path>\lib) to Linker » General » Additional Library Directories
 
These paths are the same in both Debug and Release configuration, so you can set them globally for your project ("All configurations").

Additional Dependencies - Debug - Win32 
 
C:\SDL2_image-2.6.3\lib\x86;C:\SDL2-2.26.3\lib\x86;%(AdditionalLibraryDirectories)
 
Additional Dependencies - Release - Win32
 
C:\SDL2_image-2.6.3\lib\x86;C:\SDL2-2.26.3\lib\x86;%(AdditionalLibraryDirectories) 
  
* Eg: Image Below  

![217830003-4fc159a7-a282-4300-ae81-00cedc7f2404](https://user-images.githubusercontent.com/98597119/217916875-1722c69a-794c-4f7d-8a5f-adc166379290.png)
  
* The next step is to link your application to the SDL libraries (.lib files) that your code will need. 

Libraries must be added in the project's properties, in Linker » Input » Additional Dependencies.
 
Add all the SDL libraries that you need, for example "SDL2.lib", "SDL2main.lib" and "SDL2_image.lib".
  
Additional Dependencies - Debug - Win32

SDL2.lib;SDL2main.lib;SDL2_image.lib;%(AdditionalDependencies)
  
Additional Dependencies - Release - Win32  

SDL2.lib;SDL2main.lib;SDL2_image.lib;%(AdditionalDependencies)

* Eg:  Image Below

![217830961-9b1583d6-e9bc-464d-ad12-736e21b57876](https://user-images.githubusercontent.com/98597119/217921185-c6d2785f-3bfd-4876-ac52-bf6a8b3727b8.png)

## Project Folder Structure

Copie all dll in C:\SDL2_image-2.6.3\lib\x86 and C:\SDL2-2.26.3\lib\x86 to project folder.

* Eg: Image Below

![sdlExample](https://user-images.githubusercontent.com/98597119/217910063-f3cd812d-7696-4041-a8c2-ed3ac7000fa0.png)
