#pragma once

namespace axl {
namespace glw {

enum PlatformType
{	
	PLATFORM_UNKNOWN = 0,
	PLATFORM_WINDOWS,
	PLATFORM_IPHONE,
	PLATFORM_ANDROID,
	PLATFORM_MAC,
	PLATFORM_LINUX,
	PLATFORM_UNIX,
	PLATFORM_POSIX
};

enum ABIType
{
	ABI_UNKNOWN = 0,
	ABI_WIN32,
	ABI_WIN64,
	ABI_ANDROID_ARM,
	ABI_ANDROID_ARM64,
	ABI_ANDROID_X86,
	ABI_ANDROID_X86_64,
	ABI_ANDROID_MIPS64,
	ABI_ANDROID_MIPS
};

#ifndef _AXL_GLWPlatformType
	#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__) // WINDOWS
		constexpr PlatformType PLATFORM = PLATFORM_WINDOWS;
	#elif defined(__ANDROID__) 		// android
		constexpr PlatformType PLATFORM = PLATFORM_ANDROID;
	#elif defined(__APPLE__) 		// apple
		#include <TargetConditionals.h>
		#if defined(TARGET_OS_IPHONE)	// apple iphone
			constexpr PlatformType PLATFORM = PLATFORM_IPHONE;
		#elif defined(TARGET_OS_MAC)	// apple mac os
			constexpr PlatformType PLATFORM = PLATFORM_MAC;
		#else						// unknown apple product
			constexpr PlatformType PLATFORM = PLATFORM_UNKNOWN;
		#endif
	#elif defined(__linux__) 		// linux
		constexpr PlatformType PLATFORM = PLATFORM_LINUX;
	#elif defined(__unix__) 		// all unixes not caught above
		constexpr PlatformType PLATFORM = PLATFORM_UNIX;
	#elif defined(_POSIX_VERSION) 	// posix
		constexpr PlatformType PLATFORM = PLATFORM_POSIX;
	#else 							// unknown
		constexpr PlatformType PLATFORM = PLATFORM_UNKNOWN;
	#endif
#endif // !AXL_GLWPlatformType

#ifndef AXL_GLWABIType
	#if (PLATFORM==PLATFORM_WINDOWS)
		#ifdef _WIN64
			constexpr ABIType ABI = ABI_WIN64;
		#else
			constexpr ABIType ABI = ABI_WIN32;
		#endif
	#elif (PLATFORM==PLATFORM_ANDROID)
		#ifndef ABI
			#if defined(__arm__)
				constexpr ABIType ABI = ABI_ANDROID_ARM;
			#elif defined(__aarch64__)
				constexpr ABIType ABI = ABI_ANDROID_ARM64;
			#elif defined(__i386__)
				constexpr ABIType ABI = ABI_ANDROID_X86;
			#elif defined(__x86_64__)
				constexpr ABIType ABI = ABI_ANDROID_X86_64;
			#elif defined(__mips64)
				constexpr ABIType ABI = ABI_ANDROID_MIPS64;
			#elif defined(__mips__)
				constexpr ABIType ABI = ABI_ANDROID_MIPS;
			#else
				constexpr ABIType ABI = ABI_UNKNOWN;
			#endif
		#endif // !ABI
	#else
		constexpr ABIType ABI = ABI_UNKNOWN;
	#endif
#endif// !AXL_GLWABIType

} // namespace axl::glw
} // namespace axl