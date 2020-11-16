#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>

namespace axl {
namespace glw {

typedef void* (__stdcall *PFNGetGLProcAddress)(const char*name);

PFNGetGLProcAddress GetGLProcAddress = (PFNGetGLProcAddress)wglGetProcAddress;

} // namespace axl.glw
} // namespace axl