#include <axl.glw/platform.hpp>
#if PLATFORM==PLATFORM_WINDOWS
#include "platform/win32/wglext.inl"
#else
#error "unsupported platform"
#endif