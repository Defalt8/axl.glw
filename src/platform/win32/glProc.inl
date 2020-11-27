#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>

namespace axl {
namespace glw {

void* __stdcall GetGLProcAddress(const char*name)
{
	void *p = (void *)wglGetProcAddress(name);
	if(p == 0 || (p == (void *)0x1) || (p == (void *)0x2) || (p == (void *)0x3) || (p == (void *)-1))
	{
		HMODULE module = LoadLibraryA("opengl32.dll");
		p = (void *)GetProcAddress(module, name);
	}
	return p;
}

} // namespace axl.glw
} // namespace axl
