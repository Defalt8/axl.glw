#include "glProc.hpp"
#include <axl.glw/platform.h>

#if PLATFORM==PLATFORM_WINDOWS
#	include "platform/win32/glProc.inl"
#elif PLATFORM==PLATFORM_LINUX
#	include "platform/linux/glProc.inl"
#else
#	error Unsupported platform
#endif