#include <gtest/gtest.h>

namespace mylib
{

	template<typename FixtureType>
	class MyTestSuite : public ::testing::Test, public FixtureType {};

	TYPED_TEST_SUITE_P(MyTestSuite);

	TYPED_TEST_P(MyTestSuite, Test1)
	{
		EXPECT_TRUE(getTrue());
	}

	TYPED_TEST_P(MyTestSuite, Test2)
	{
		EXPECT_TRUE(getTrue());
	}

	REGISTER_TYPED_TEST_SUITE_P(
		MyTestSuite,
		Test1,
		Test2);

}