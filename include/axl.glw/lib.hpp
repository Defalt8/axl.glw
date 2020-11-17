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

struct Version
{
	short major;
	short minor;
	short patch;
};
typedef struct Version Version;

AXLGLWAPI const Version version;
AXLGLWAPI const LibraryType type;
AXLGLWAPI const bool debug;

} // namespace axl.glw.lib	
} // namespace axl.glw	
} // namespace axl
