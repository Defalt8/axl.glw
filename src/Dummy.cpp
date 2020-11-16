
#include <axl.glw/platform.hpp>
#if PLATFORM==PLATFORM_WINDOWS
#include "platform/win32/dummy.inl"
#else
#error unsupported platform
#endif