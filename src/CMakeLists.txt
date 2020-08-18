set(CMAKE_CXX_STANDARD 11)
cmake_minimum_required(VERSION 3.10)

add_library(database_lib "lib.cpp")
target_include_directories(database_lib PUBLIC .)

add_executable(database main.cpp)

set_target_properties(database_lib PROPERTIES LINKER_LANGUAGE CXX)
