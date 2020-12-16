#pragma once
#include "lib.hpp"

namespace axl {
namespace glw {

AXLGLWAPI int MAJOR_GL_VERSION;
AXLGLWAPI int MINOR_GL_VERSION;
AXLGLWAPI int NUM_GL_EXTENSIONS;
	
enum InitError {
	IERR_UNKNOWN = -1,
	IERR_NONE = 0,
	IERR_DUMMY,
	IERR_NO_CONTEXT
};
/**
 * Initializes and loads gl functions.
 * 
 * If use_dummy is set to false, then no dummy context 
 *   will be made current before retriving functions.
 *   However, this might result in initialization failure
 *   if no OpenGL context is currently bound.
 */
AXLGLWAPI InitError init(bool use_dummy = true);
// Cleans up allocated resources and global dummy
AXLGLWAPI void cleanup();
// Returns true if extension is supported on current platform
AXLGLWAPI bool checkExtension(const char* extension, bool use_dummy = false);

} // namespace axl.glw
} // namespace axl