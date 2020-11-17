#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Assert.hpp"
#include <axl.glw/lib.hpp>
#include <axl.glw/wglext.hpp>

int main(int argc, char *argv[])
{
	using namespace axl;
	// using namespace axl::glw;
	using namespace axl::glw::wglext;
	atexit(cleanup);
	if(argc == 2)
	{
		if(0 == strcmp(argv[1], "-h") || 0 == strcmp(argv[1], "--help"))
		{
			printf(
				"wgl -h|--help                      prints this help.\n"
				"wgl -e|--extensions                prints supported OpenGL extensions, space separated.\n"
				// "wgl -E|--Extensions                prints supported OpenGL extensions, new-line separated.\n"
				// "wgl -ne|--num-extensions           prints number of supported OpenGL extensions.\n"
				"wgl -ce|--check-extension <ext>    prints 1 if the extension <ext> is supported else 0.\n"
			);
		}
		else if(0 == strcmp(argv[1], "-e") || 0 == strcmp(argv[1], "--extensions"))
		{
			if(IERR_NONE != init(true)) return 2;
			if(!WGL_ARB_extensions_string) return 3;
			const char* wgl_extensions = wglGetExtensionsStringARB(wglGetCurrentDC());
			if(!wgl_extensions) return 3;
			printf("%s\n", wgl_extensions);
		}
		else { fprintf(stderr, "!- invalid arguments\n"); return 1; }
	}
	else if(argc == 3)
	{
		if(0 == strcmp(argv[1], "-ce") || 0 == strcmp(argv[1], "--check-extension"))
		{
			if(IERR_NONE != init(true)) return 2;
			bool found = checkExtension(argv[2], true);
			printf("%hhd\n", found);
			return !found ? 1 : 0;
		}
		else { fprintf(stderr, "!- invalid arguments\n"); return 1; }
	}
	return 0;
}