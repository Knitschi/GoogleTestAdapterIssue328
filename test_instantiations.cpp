#include <gtest/gtest.h>

#include <MyTests/fixture.h>
#include <MyTests/MyTestSuite.h>

namespace mylib
{

	INSTANTIATE_TYPED_TEST_SUITE_P(
		MyTestSuite_MyFixture1,
		MyTestSuite,
		MyFixture1
	);

	INSTANTIATE_TYPED_TEST_SUITE_P(
		MyTestSuite_MyFixture2,
		MyTestSuite,
		MyFixture2
	);

}