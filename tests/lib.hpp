#pragma once
#include <axl.glw/lib.hpp>

#if defined(DEBUG)
#define DEBUG_REL "Debug"
#else
#define DEBUG_REL "Release"
#endif

#if defined(AXLGLW_MODULE)
#define LIB_TYPE "MODULE"
#elif defined(AXLGLW_SHARED)
#define LIB_TYPE "SHARED"
#elif defined(AXLGLW_STATIC)
#define LIB_TYPE "STATIC"
#else
#define LIB_TYPE ""
#endif