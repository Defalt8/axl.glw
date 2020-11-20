#include <axl.glw/lib.hpp>

namespace axl {
namespace glw {
namespace lib {

const Version VERSION = { AXLGLW_VERSION_MAJOR, AXLGLW_VERSION_MINOR, AXLGLW_VERSION_PATCH };

#if defined(AXLGLW_MODULE)
const LibraryType LIBRARY_TYPE = LT_MODULE;
#elif defined(AXLGLW_SHARED)
const LibraryType LIBRARY_TYPE = LT_SHARED;
#else
const LibraryType LIBRARY_TYPE = LT_STATIC;
#endif

#ifdef DEBUG
const BuildType BUILD_TYPE = BT_DEBUG;
#elif defined(NDEBUG)
const BuildType BUILD_TYPE = BT_RELEASE;
#else
const BuildType BUILD_TYPE = BT_OTHER;
#endif

} // namespace axl.glw.lib	
} // namespace axl.glw	
} // namespace axl
