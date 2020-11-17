#include <axl.glw/lib.hpp>

namespace axl {
namespace glw {
namespace lib {

const Version version = { 0, 4, 8 };

#if defined(AXLGLW_MODULE)
const LibraryType type = LT_MODULE;
#elif defined(AXLGLW_SHARED)
const LibraryType type = LT_SHARED;
#else
const LibraryType type = LT_STATIC;
#endif

#ifdef DEBUG
const bool debug = true;
#else
const bool debug = false;
#endif

} // namespace axl.glw.lib	
} // namespace axl.glw	
} // namespace axl
