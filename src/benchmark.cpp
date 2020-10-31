#include <benchmark/benchmark.h>

#include "gcd.h"

static void BM_gcd(benchmark::State& state) {
    for (auto _ : state) {
        int result = gcd(10, 10);
    }
}

static void BM_gcd_small(benchmark::State& state) {
    for (auto _ : state) {
        int result = gcd(105, 252);
    }
}

static void BM_gcd_medium(benchmark::State& state) {
    for (auto _ : state) {
        int result = gcd(105234, 22352);
    }
}

static void BM_gcd_large(benchmark::State& state) {
    for (auto _ : state) {
        int result = gcd(1052300042, 22023352);
    }
}

BENCHMARK(BM_gcd);
BENCHMARK(BM_gcd_small);
BENCHMARK(BM_gcd_medium);
BENCHMARK(BM_gcd_large);

BENCHMARK_MAIN();