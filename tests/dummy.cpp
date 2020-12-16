#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <axl.glw/Dummy.hpp>
#include "Assert.hpp"
#include "lib.hpp"

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl;
	using namespace axl::glw;
	printf("axl.glw - version %u.%u.%u  %s %s\n", axl::glw::lib::VERSION.major, axl::glw::lib::VERSION.minor, axl::glw::lib::VERSION.patch, cstrLibType(axl::glw::lib::LIBRARY_TYPE), cstrBuildType(axl::glw::lib::BUILD_TYPE));
	if(verbose) puts("----------------------------------------");
	{
		Assertve(GlobalDummy.isInitialized(), verbose);
		Assertve(GlobalDummy.makeCurrent(), verbose);
		Assertve(Dummy::clearCurrent(), verbose);
		Assertve(!GlobalDummy.isCurrent(), verbose);
	}
	{
		Dummy::InitError error;
		Dummy dummy;
		Assertv(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
		error = dummy.init();
		Assertv(error == Dummy::IERR_NONE, verbose);
		Assertv(dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(dummy.makeCurrent(), verbose);
		Assertv(dummy.isCurrent(), verbose);
		dummy.destroy();
		Assertv(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
		Assertv(dummy.init() == Dummy::IERR_NONE, verbose);
		Assertv(dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(dummy.makeCurrent(), verbose);
		Assertv(dummy.isCurrent(), verbose);
		dummy.destroy();
		Assertv(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
	}
	puts("----------------------------------------");
	printf("# %d Failed!\n", Assert::_num_failed_tests);
	return Assert::_num_failed_tests;
}