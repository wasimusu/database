cmake_minimum_required(VERSION 3.0)
project(cpp_project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_BUILD_TYPE RELEASE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -fsanitize=address -pg -g")

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(benchmark)