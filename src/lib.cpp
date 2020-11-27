#include <axl.glw/lib.hpp>

namespace axl {
namespace glw {
namespace lib {

const Version VERSION = { LIBAXLGLW_VERSION_MAJOR, LIBAXLGLW_VERSION_MINOR, LIBAXLGLW_VERSION_PATCH };

#if defined(LIBAXLGLW_SHARED)
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
