# axl.glw

A well organized C++ OpenGL wrangler library

## Latest version and supported platforms

- Latest *version*: 0.6.15 *Alpha*
- Currently Supported *platforms*: **Windows**

## Library Headers

- *[axl.glw/lib.hpp](/include/axl.glw/lib.hpp)* -- The library header. Contains library version.
- *[axl.glw/platform.h](/include/axl.glw/platform.h)* -- Declares platform and ABI.
- *[axl.glw/Dummy.hpp](/include/axl.glw/Dummy.hpp)* -- A class that creates an OpenGL dummy context and declares an external GlobalDummy object outside the class.
- *[axl.glw/glw.hpp](/include/axl.glw/glw.hpp)* -- (**Main Header**). Declares functions and variables of the OpenGL function-loading library.
- *[axl.glw/gl.hpp](/include/axl.glw/gl.hpp)* -- Declares all *OpenGL 1.0* constants and functions that do ***NOT*** require loading.
- *[axl.glw/glext.hpp](/include/axl.glw/glext.hpp)* -- Declares some *common* *OpenGL extension* constants and functions that require loading.
- *[axl.glw/gl1.hpp](/include/axl.glw/gl1.hpp)* -- Declares all *OpenGL 1.+* constants and functions that require loading.
- *[axl.glw/gl2.hpp](/include/axl.glw/gl2.hpp)* -- Declares all *OpenGL 2.+* constants and functions that require loading.
- *[axl.glw/gl3.hpp](/include/axl.glw/gl3.hpp)* -- Declares all *OpenGL 3.+* constants and functions that require loading.
- *[axl.glw/gl4.hpp](/include/axl.glw/gl4.hpp)* -- Declares all *OpenGL 4.+* constants and functions that require loading.
- *[axl.glw/wglext.hpp](/include/axl.glw/wglext.hpp)* -- Declares Windows specific *WGL extension* constants and functions that require loading.

## Tools

- *gl* -- An OpenGL info commandline tool.
- *wgl* -- A windows OpenGL extension (WGL) info commandline tool.

## Requirements

- Windows operating system. (Linux and other platforms implementations are on the way)
- CMake 3.10 or above.
- Any C and C++ SDK that can be accessed through a command line. (MSVC, MinGW) If you have Visual Studio or CodeBlocks then you are set.

## How to get started

- Clone this repo into a directory and execute these commands to build the library.
  - git clone https://github.com/defalt8/axl.glw.git
  - cd template.axl.glw
  - mkdir out\\build
  - cd out\\build
  - cmake -B . -S ../../ (or with a generator of your choosing.) cmake -G \<generator\> -B . -S ../../
  - cmake --build .
  
