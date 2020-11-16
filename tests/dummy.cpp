#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Assert.hpp"
#include <axl.glw/lib.hpp>
#include <axl.glw/Dummy.hpp>

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl;
	using namespace axl::glw;
	printf("axl.glw - version %u.%u.%u\n", lib::version.major, lib::version.minor, lib::version.patch);
	puts("----------------------------------------");
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