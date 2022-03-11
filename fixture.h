#include <gtest/gtest.h>

#include <MyTests/libmytests_export.h>

namespace mylib
{

	class LIBMYTESTS_EXPORT MyFixture1
	{
	  public:
		bool getTrue();
	};

	class LIBMYTESTS_EXPORT MyFixture2
	{
	public:
		bool getTrue();
	};

}