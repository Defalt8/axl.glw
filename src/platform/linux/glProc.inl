#include <X11/Xlib.h>
#include <GL/glx.h>

namespace axl {
namespace glw {

void* GetGLProcAddress(const char*name)
{
	return (void*)glXGetProcAddress((const GLubyte*)name);
}

} // namespace axl.glw
} // namespace axl
