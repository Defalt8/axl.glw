#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Assert.hpp"
#include <axl.glw/lib.hpp>
#include <axl.glw/glw.hpp>
#include <axl.glw/gl.hpp>
#include <axl.glw/gl2.hpp>
#include <axl.glw/gl3.hpp>

int main(int argc, char *argv[])
{
	using namespace axl;
	using namespace axl::glw;
	using namespace axl::glw::gl;
	using namespace axl::glw::gl2;
	using namespace axl::glw::gl3;atexit(glw::cleanup);
	if(argc == 2)
	{
		if(0 == strcmp(argv[1], "-h") || 0 == strcmp(argv[1], "--help"))
		{
			printf(
				"gl.exe -h|--help                      prints this help.\n"
				"gl.exe -v|--version                   prints OpenGL version.\n"
				"gl.exe -sv|--shader-version           prints OpenGL shader version, if present.\n"
				"gl.exe -V|--vendor                    prints OpenGL hardware vendor.\n"
				"gl.exe -e|--extensions                prints supported OpenGL extensions, space separated.\n"
				"gl.exe -E|--Extensions                prints supported OpenGL extensions, new-line separated.\n"
				"gl.exe -ne|--num-extensions           prints number of supported OpenGL extensions.\n"
				"gl.exe -ce|--check-extension <ext>    prints 1 if the extension <ext> is supported else 0.\n"
			);
		}
		else if(0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--version"))
		{
			if(IERR_NONE != glw::init(true)) return 2;
			if(glw::GL_MAJOR_VERSION > 0)
			{
				printf("%d.%d\n", glw::GL_MAJOR_VERSION, glw::GL_MINOR_VERSION);
			}
			else if(glw::GL_MAJOR_VERSION >= 3)
			{
				GLint major_version, minor_version;
				glGetIntegerv(glw::GL_MAJOR_VERSION, &major_version);
				glGetIntegerv(glw::GL_MINOR_VERSION, &minor_version);
				printf("%d.%d\n", major_version, minor_version);
			}
			else
			{
				const char* gl_version = (const char*)glGetString(GL_VERSION);
				if(!gl_version) return 3;
				printf("%s\n", gl_version);
			}
		}
		else if(0 == strcmp(argv[1], "-sv") || 0 == strcmp(argv[1], "--shader-version"))
		{
			if(IERR_NONE != glw::init(true)) return 2;
			if(glw::GL_MAJOR_VERSION >= 3)
			{
				printf("%s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));
			}
			else
			{
				return 3;
			}
		}
		else if(0 == strcmp(argv[1], "-V") || 0 == strcmp(argv[1], "--vendor"))
		{
			if(IERR_NONE != glw::init(true)) return 2;
			const char* gl_vendor = (const char*)glGetString(GL_VENDOR);
			if(!gl_vendor) return 3;
			printf("%s\n", gl_vendor);
		}
		else if(0 == strcmp(argv[1], "-e") || 0 == strcmp(argv[1], "--extensions"))
		{
			if(IERR_NONE != glw::init(true)) return 2;
			const char* gl_extensions = (const char*)glGetString(GL_EXTENSIONS);
			if(!gl_extensions) return 3;
			printf("%s\n", gl_extensions);
		}
		else if(0 == strcmp(argv[1], "-ne") || 0 == strcmp(argv[1], "--num-extensions"))
		{
			if(IERR_NONE != glw::init(true)) return 2;
			if(glw::GL_NUM_EXTENSIONS < 0) return 3;
			printf("%d\n", glw::GL_NUM_EXTENSIONS);
		}
		else if(0 == strcmp(argv[1], "-E") || 0 == strcmp(argv[1], "--Extensions"))
		{
			if(IERR_NONE != glw::init(true)) return 2;
			if(glw::GL_NUM_EXTENSIONS <= 0) return 3;
			if(glw::GL_MAJOR_VERSION >= 3)
			{
				const char* gl_extension;
				for(int i=0; i<glw::GL_NUM_EXTENSIONS; ++i)
				{
					gl_extension = (const char*)glGetStringi(GL_EXTENSIONS, i);
					if(gl_extension) printf("%s\n", gl_extension);
				}
			}
			else
			{
				const char* gl_extensions = (const char*)glGetString(GL_EXTENSIONS);
				if(!gl_extensions) return 3;
				char c;
				for(int i=0; i<0xfffff; ++i)
				{
					c = gl_extensions[i];
					if(c == '\0') break;
					switch(c)
					{
						case ' ':
							putchar('\n');
							break;
						default:
							putchar(c);
							break;
					}
				}
			}
			
		}
		else { fprintf(stderr, "!- invalid arguments\n"); return 1; }
	}
	else if(argc == 3)
	{
		if(0 == strcmp(argv[1], "-ce") || 0 == strcmp(argv[1], "--check-extension"))
		{
			if(IERR_NONE != glw::init(true)) return 2;
			bool found = glw::checkExtension(argv[2]);
			printf("%hhd\n", found);
			return !found ? 1 : 0;
		}
		else { fprintf(stderr, "!- invalid arguments\n"); return 1; }
	}
	return 0;
}