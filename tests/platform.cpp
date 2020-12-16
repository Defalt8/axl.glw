#include <cstdio>
#include <cstdlib>
#include <axl.glw/platform.h>
#include "lib.hpp"

int main()
{
	using namespace axl::glw;
	const char *CSTR_PLATFORM = 0, *CSTR_ABI = 0;
	switch (PLATFORM)
	{
		case PLATFORM_WINDOWS: CSTR_PLATFORM = "Windows"; break;
		case PLATFORM_IPHONE: CSTR_PLATFORM = "Iphone"; break;
		case PLATFORM_ANDROID: CSTR_PLATFORM = "Android"; break;
		case PLATFORM_MAC: CSTR_PLATFORM = "Mac"; break;
		case PLATFORM_LINUX: CSTR_PLATFORM = "Linux"; break;
		case PLATFORM_UNIX: CSTR_PLATFORM = "Unix"; break;
		case PLATFORM_POSIX: CSTR_PLATFORM = "Posix"; break;
		case PLATFORM_UNKNOWN:
		default: CSTR_PLATFORM = "Unknown";
	}
	switch (ABI)
	{
		case ABI_WIN32: CSTR_ABI = "Win32"; break;
		case ABI_WIN64: CSTR_ABI = "Win64"; break;
		case ABI_ANDROID_ARM: CSTR_ABI = "Android_arm"; break;
		case ABI_ANDROID_ARM64: CSTR_ABI = "Android_arm64"; break;
		case ABI_ANDROID_X86: CSTR_ABI = "Android_x86"; break;
		case ABI_ANDROID_X86_64: CSTR_ABI = "Android_x86_64"; break;
		case ABI_ANDROID_MIPS64: CSTR_ABI = "Android_mips64"; break;
		case ABI_ANDROID_MIPS: CSTR_ABI = "Android_mips"; break;
		case ABI_UNKNOWN:
		default: CSTR_ABI = "Unknown";
	}
	printf("axl.glw - version %u.%u.%u  %s %s\n", axl::glw::lib::VERSION.major, axl::glw::lib::VERSION.minor, axl::glw::lib::VERSION.patch, cstrLibType(axl::glw::lib::LIBRARY_TYPE), cstrBuildType(axl::glw::lib::BUILD_TYPE));
	puts("----------------------------------------");
	printf("Platform: %s\n", CSTR_PLATFORM);
	printf("ABI: %s\n", CSTR_ABI);
	return 0;
}