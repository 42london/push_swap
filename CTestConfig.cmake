enable_testing()

set(CTEST_PROJECT_NAME "HPX")
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
set(CTEST_NIGHTLY_START_TIME "00:00:00 UTC")

set(CTEST_TEST_TIMEOUT 300)
set(CTEST_BUILD_PARALLELISM 20)
set(CTEST_TEST_PARALLELISM 4)
set(CTEST_CMAKE_GENERATOR Ninja)
set(CTEST_BUILD_PARALLELISM 5)

#ctest_start(Experimental TRACK git_local_branch)
#ctest_update()
#ctest_submit(PARTS Update)
#ctest_configure()
#ctest_submit(PARTS Configure)
#ctest_build(TARGET tests FLAGS "-k0 -j ${CTEST_BUILD_PARALLELISM}")