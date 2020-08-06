set(CMAKE_CXX_STANDARD 11)
cmake_minimum_required(VERSION 3.10)

add_library(cpp_project_lib "lib.cpp")
target_include_directories(cpp_project_lib PUBLIC .)

add_executable(cpp_project main.cpp)

set_target_properties(cpp_project_lib PROPERTIES LINKER_LANGUAGE CXX)
