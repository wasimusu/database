# Setup benchmark
add_subdirectory(benchmark)
include_directories(benchmark/include)

add_executable(bench_lib src/bench_lib.cpp)
target_link_libraries(bench_lib benchmark)