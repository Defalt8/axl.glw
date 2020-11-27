#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <axl.glw/lib.hpp>
#include <axl.glw/wglext.hpp>

int main(int argc, char *argv[])
{
	using namespace axl;
	using namespace axl::glw::wglext;
	atexit(cleanup);
	if(argc == 2)
	{
		if(0 == strcmp(argv[1], "-h") || 0 == strcmp(argv[1], "--help"))
		{
			printf(" wgl -- A windows OpenGL extension (WGL) info commandline tool.\n\n"
				"    wgl -h|--help                      prints this help.\n"
				"    wgl -e|--extensions                prints supported WGL extensions, space separated.\n"
				"    wgl -E|--Extensions                prints supported WGL extensions, newline separated.\n"
				"    wgl -ne|--num-extensions           prints number of supported WGL extensions.\n"
				"    wgl -ce|--check-extension <ext>    prints 1 if the extension <ext> is supported else 0.\n"
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
		else if(0 == strcmp(argv[1], "-E") || 0 == strcmp(argv[1], "--Extensions"))
		{
			if(IERR_NONE != init(true)) return 2;
			if(!WGL_ARB_extensions_string) return 3;
			const char* wgl_extensions = wglGetExtensionsStringARB(wglGetCurrentDC());
			if(!wgl_extensions) return 3;
			const char *cur = wgl_extensions;
			while((*cur) != '\0')
			{
				switch(*cur)
				{
					case ' ':
						putchar('\n');
						++cur;
						continue;
					case '\0':
						putchar('\n');
						return 0;
					default:
						putchar(*cur);
						++cur;
						continue;
				}
			}
		}
		else if(0 == strcmp(argv[1], "-ne") || 0 == strcmp(argv[1], "--num-extensions"))
		{
			if(IERR_NONE != init(true)) return 2;
			if(!WGL_ARB_extensions_string) return 3;
			const char* wgl_extensions = wglGetExtensionsStringARB(wglGetCurrentDC());
			if(!wgl_extensions)
			{
				printf("0\n");
				return 3;
			}
			int num_ext = 0;
			const char *cur = wgl_extensions;
			while((*cur) != '\0')
			{
				switch(*cur)
				{
					case '\0':
					case ' ':
						++num_ext;
						break;
				}
				++cur;
			}
			printf("%d\n", num_ext);
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