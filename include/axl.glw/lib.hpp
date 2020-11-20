#pragma once

#if defined(AXLGLW_MODULE)
#	ifdef WIN32
#		ifdef AXLGLW_BUILD
#			define AXLGLWAPI extern __declspec(dllexport)
#			define AXLGLWCXXAPI __declspec(dllexport)
#		else
#			define AXLGLWAPI extern __declspec(dllimport)
#			define AXLGLWCXXAPI __declspec(dllimport)
#		endif
#	else
#		define AXLGLWAPI extern
#		define AXLGLWCXXAPI
#	endif
#elif defined(AXLGLW_SHARED)
#	ifdef WIN32
#		ifdef AXLGLW_BUILD
#			define AXLGLWAPI extern __declspec(dllexport)
#			define AXLGLWCXXAPI __declspec(dllexport)
#		else
#			define AXLGLWAPI extern __declspec(dllimport)
#			define AXLGLWCXXAPI __declspec(dllimport)
#		endif
#	else
#		define AXLGLWAPI extern
#		define AXLGLWCXXAPI
#	endif
#else
#	ifndef AXLGLW_STATIC
#		define AXLGLW_STATIC
#	endif
#	define AXLGLWAPI extern
#	define AXLGLWCXXAPI
#endif

namespace axl {
namespace glw {
namespace lib {

enum LibraryType {
	LT_STATIC,
	LT_SHARED,
	LT_MODULE
};
typedef enum LibraryType LibraryType;

enum BuildType {
	BT_DEBUG,
	BT_RELEASE,
	BT_OTHER
};
typedef enum BuildType BuildType;

struct Version
{
	unsigned short major;
	unsigned short minor;
	unsigned short patch;
};
typedef struct Version Version;

AXLGLWAPI const Version VERSION;
AXLGLWAPI const LibraryType LIBRARY_TYPE;
AXLGLWAPI const BuildType BUILD_TYPE;

} // namespace axl.glw.lib	
} // namespace axl.glw	
} // namespace axl
