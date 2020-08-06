#include <benchmark/benchmark.h>
#include "../../src/lib.cpp"


static void bench_add(benchmark::State &state) {
    while (state.KeepRunning()) {
      add(2, 3);
    }
}

BENCHMARK(bench_add);

BENCHMARK_MAIN();