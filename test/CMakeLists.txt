# Setup tests
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

# All tests
add_executable(tests src/gtest_main.cpp)
target_link_libraries(tests gtest gtest_main)