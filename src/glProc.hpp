#include <axl.glw/platform.h>

namespace axl {
namespace glw {

#if PLATFORM==PLATFORM_WINDOWS
	void* __stdcall GetGLProcAddress(const char*name);
#elif PLATFORM==PLATFORM_LINUX
	void* GetGLProcAddress(const char*name);
#else
#	error Unsupported platform
#endif

} // namespace axl.glw
} // namespace axl
