
include(cpfAddCppPackageComponent)

cpfPackageProject(
	TARGET_NAMESPACE D
    BRIEF DESCRIPTION "A package that reproduces issue 328 of the GoogleTestAdatper"
    LONG_DESCRIPTION "The bug freezes Visual Studio when klicking on a test case in GoogleTestAdapter. See https://github.com/csoltenborn/GoogleTestAdapter/issues/328"
	COMPONENTS SINGLE_COMPONENT
)

set( PACKAGE_PUBLIC_HEADER

)

set( PACKAGE_PRODUCTION_FILES
	fixture.cpp
	fixture.h
	MyTestSuite.h
	test_instantiations.cpp
	main.cpp
)

set( PACKAGE_PUBLIC_FIXTURE_HEADER

)

set( PACKAGE_FIXTURE_FILES

)
	
set( PACKAGE_TEST_FILES
	
)



############################################## Add Package #################################
cpfAddCppPackageComponent( 
	TYPE					CONSOLE_APP
	BRIEF_DESCRIPTION		""
	LONG_DESCRIPTION		""
	PUBLIC_HEADER			${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
	PUBLIC_FIXTURE_HEADER	${PACKAGE_PUBLIC_FIXTURE_HEADER}
	FIXTURE_FILES			${PACKAGE_FIXTURE_FILES}
	TEST_FILES				${PACKAGE_TEST_FILES}
	LINKED_LIBRARIES		gtest_main
)

cpfFinalizePackageProject()
