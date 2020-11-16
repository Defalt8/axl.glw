#pragma once

#if defined(MODULE)
	#ifdef WIN32
		#ifdef BUILD_MODULE
			#define AXLGLWAPI extern __declspec(dllexport)
		#else
			#define AXLGLWAPI extern __declspec(dllimport)
		#endif
	#else
		#define AXLGLWAPI extern
	#endif
#elif defined(SHARED)
	#ifdef WIN32
		#ifdef BUILD_SHARED
			#define AXLGLWAPI extern __declspec(dllexport)
		#else
			#define AXLGLWAPI extern __declspec(dllimport)
		#endif
	#else
		#define AXLGLWAPI extern
	#endif
#else
	#define AXLGLWAPI extern
#endif

namespace axl {
namespace glw {
namespace lib {

struct Version
{
	short major;
	short minor;
	short patch;
};

AXLGLWAPI Version version;

} // namespace axl.glw.lib	
} // namespace axl.glw	
} // namespace axl
