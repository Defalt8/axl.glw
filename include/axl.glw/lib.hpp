#pragma once

#if defined(LIBAXLGLW_SHARED)
#	ifdef WIN32
#		ifdef LIBAXLGLW_BUILD
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
#	define AXLGLWAPI extern
#	define AXLGLWCXXAPI
#endif

#if __cplusplus >= 201103L
#	if _MSC_VER && _MSC_VER < 1900 // less than MSVC++ 2015
#		define AXLGLWCONSTMODIFIER const static
#	else
#		define AXLGLWCONSTMODIFIER AXLGLWCONSTMODIFIER
#	endif
#else
#	define AXLGLWCONSTMODIFIER const static
#endif

namespace axl {
namespace glw {
namespace lib {

enum LibraryType {
	LT_STATIC,
	LT_SHARED
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
