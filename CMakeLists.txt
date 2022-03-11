cmake_minimum_required(VERSION 3.12)

project(GoogleTestAdapterIssue328)

string(APPEND CMAKE_CXX_FLAGS_DEBUG " /MTd")

option(BUILD_GMOCK OFF)
add_subdirectory(googletest)

add_executable(
	MyTests
	README.md
	test_instantiations.cpp
)

target_link_libraries(MyTests gtest_main)

