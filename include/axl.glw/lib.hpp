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
#	define AXLGLWAPI extern
#	define AXLGLWCXXAPI
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
typedef struct Version Version;

AXLGLWAPI Version version;

} // namespace axl.glw.lib	
} // namespace axl.glw	
} // namespace axl
