#pragma once
#include <axl.glw/lib.hpp>

const char* cstrLibType(axl::glw::lib::LibraryType lib_type)
{
	using namespace axl::glw::lib;
	switch (lib_type)
	{
		case LT_SHARED: return "SHARED";
		default:
		case LT_STATIC: return "STATIC";
	}
}

const char* cstrBuildType(axl::glw::lib::BuildType build_type)
{
	using namespace axl::glw::lib;
	switch (build_type)
	{
		case BT_DEBUG: return "Debug";
		case BT_RELEASE: return "Release";
		default:
		case BT_OTHER: return "Other";
	}
}