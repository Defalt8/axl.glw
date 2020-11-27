
#include <axl.glw/platform.h>
#if PLATFORM==PLATFORM_WINDOWS
#include "platform/win32/dummy.inl"
#elif PLATFORM==PLATFORM_LINUX
#include "platform/linux/dummy.inl"
#else
#error unsupported platform
#endif