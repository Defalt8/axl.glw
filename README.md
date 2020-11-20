# axl.glw

A well organized C++ OpenGL wrangler library

## Latest version

0.5.9 alpha

## Library Headers

- [axl.glw/lib.hpp](/include/axl.glw/lib.hpp) - The library header. Contains library version.
- [axl.glw/platform.hpp](/include/axl.glw/platform.hpp) - Declares platform and ABI.
- [axl.glw/Dummy.hpp](/include/axl.glw/Dummy.hpp) - A class that creates an OpenGL dummy context and declares an external GlobalDummy object outside the class.
- [axl.glw/glw.hpp](/include/axl.glw/glw.hpp) - (**Main Header**). Declares functions and variables of the OpenGL function-loading library.
- [axl.glw/gl.hpp](/include/axl.glw/gl.hpp) - Declares all *OpenGL 1.0* constants and functions that do ***NOT*** require loading.
- [axl.glw/glext.hpp](/include/axl.glw/glext.hpp) - Declares some *common* *OpenGL extension* constants and functions that require loading.
- [axl.glw/gl1.hpp](/include/axl.glw/gl1.hpp) - Declares all *OpenGL 1.+* constants and functions that require loading.
- [axl.glw/gl2.hpp](/include/axl.glw/gl2.hpp) - Declares all *OpenGL 2.+* constants and functions that require loading.
- [axl.glw/gl3.hpp](/include/axl.glw/gl3.hpp) - Declares all *OpenGL 3.+* constants and functions that require loading.
- [axl.glw/gl4.hpp](/include/axl.glw/gl4.hpp) - Declares all *OpenGL 4.+* constants and functions that require loading.
- [axl.glw/wglext.hpp](/include/axl.glw/wglext.hpp) - Declares Windows specific *WGL extension* constants and functions that require loading.