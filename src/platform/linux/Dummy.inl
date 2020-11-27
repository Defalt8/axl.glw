
#include <cstdlib>
#include <axl.glw/gl.hpp>
using namespace axl::glw::gl;
#define __gl_h_
#include <X11/Xlib.h>
#include <GL/glx.h>
#include <axl.glw/Dummy.hpp>

namespace axl {
namespace glw {

typedef struct {
	Display* display;
	Window window;
	// GLXWindow glxWindow;
	GLXContext glxContext;

} DummyData;

Dummy::Dummy(bool init)
{
	reserved = (void*)calloc(1, sizeof(DummyData));
	if(init) this->init();
}
Dummy::~Dummy()
{
	this->destroy();
	free(this->reserved);
	this->reserved = (void*)0;
}
Dummy::InitError Dummy::init()
{
	const static char* DUMMY_CLASSNAME = "ALXGLW_DUMMY_WINDOW_CLASS";
	if(!this->reserved) this->reserved = (void*)calloc(1, sizeof(DummyData));
	DummyData* data = ((DummyData*)this->reserved);
	bool init = false;
	if(init == true && data->display && data->window && data->glxContext) return IERR_NONE;
	int config[] = {
		GLX_RGBA,
		GLX_RED_SIZE, 8,
		GLX_GREEN_SIZE, 8,
		GLX_BLUE_SIZE, 8,
		GLX_DEPTH_SIZE, 24,
		GLX_STENCIL_SIZE, 8,
		GLX_DOUBLEBUFFER,
		None
	};
	data->display = XOpenDisplay(0);
	// int null_dummy;
	// if(!glXQueryExtension(data->display, &null_dummy, &null_dummy)) return IERR_UNKNOWN;
	XVisualInfo *visInfo = 0;
	visInfo = glXChooseVisual(data->display, DefaultScreen(data->display), config);
	// visInfo->c_class == TrueColor;
	data->glxContext = glXCreateContext(data->display, visInfo, None, True);
	Colormap colormap = XCreateColormap(data->display, RootWindow(data->display, visInfo->screen), visInfo->visual, AllocNone);
	XSetWindowAttributes window_attribs;
	window_attribs.colormap = colormap;
	window_attribs.border_pixel = 0;
	window_attribs.event_mask = ExposureMask | ButtonPressMask | StructureNotifyMask;
	data->window = XCreateWindow(data->display, RootWindow(data->display, data->window), 0, 0, 0U, 0U,
		0, visInfo->depth, InputOutput, visInfo->visual, CWBorderPixel|CWColormap|CWEventMask, &window_attribs);
	// data->glxWindow = glXCreateWindow(data->display, 0, data->window, None);
	XMapWindow(data->display, data->window);
	init = true;
	return IERR_NONE;
}
bool Dummy::isInitialized() const
{
	return this->reserved && ((DummyData*)this->reserved)->display && ((DummyData*)this->reserved)->window && ((DummyData*)this->reserved)->glxContext;
}
bool Dummy::isCurrent() const
{
	return this->reserved && ((DummyData*)this->reserved)->glxContext && ((DummyData*)this->reserved)->glxContext == glXGetCurrentContext();
}
bool Dummy::makeCurrent() const
{
	if(!this->reserved) return false;
	return 0 == glXMakeCurrent(((DummyData*)this->reserved)->display, ((DummyData*)this->reserved)->window, ((DummyData*)this->reserved)->glxContext);
}
bool Dummy::clearCurrent()
{
	return 0 == glXMakeCurrent(0, 0, 0);
}
void Dummy::destroy()
{
	if(!this->reserved) return;
	DummyData* data = ((DummyData*)this->reserved);
	if(data->display && data->window && data->glxContext)
	{
		glXMakeCurrent(data->display, data->window, 0);
		glXDestroyContext(data->display, data->glxContext);
	}
	// if(data->window) glXDestroyWindow(data->display, data->window);
	if(data->window) XDestroyWindow(data->display, data->window);
	data->display = 0;
	data->window = 0;
	data->glxContext = 0;
}

Dummy GlobalDummy(true);

} // namespace axl.glw
} // namespace axl