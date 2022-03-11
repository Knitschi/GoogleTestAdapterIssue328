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

	class MyFixture1
	{
	public:
		bool getTrue()
		{
			return true;
		}
	};

	class MyFixture2
	{
	public:
		bool getTrue()
		{
			return true;
		}
	};

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