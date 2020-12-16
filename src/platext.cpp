#include <axl.glw/platform.h>
#if PLATFORM==PLATFORM_WINDOWS
#	include "platform/win32/wglext.inl"
#elif PLATFORM==PLATFORM_LINUX
#	include "platform/linux/glxext.inl"
#else
#	error Unsupported platform
#endif