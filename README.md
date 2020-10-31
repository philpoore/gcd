# GCD Implimentation : Euclids Algorithm

Simple Greatest Common Divisor function.

Implimentaiton using Euclids Altorithm.

More info:

https://en.wikipedia.org/wiki/Greatest_common_divisor

https://en.wikipedia.org/wiki/Euclidean_algorithm

## Tests

Tests using googletest: https://github.com/google/googletest


```bash
$ make tests
$ ./tests
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from GCDTest
[ RUN      ] GCDTest.FirstTest
[       OK ] GCDTest.FirstTest (0 ms)
[ RUN      ] GCDTest.SimpleTests
[       OK ] GCDTest.SimpleTests (0 ms)
[----------] 2 tests from GCDTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (1 ms total)
[  PASSED  ] 2 tests.
```

## Benchmarks

Benchmarks using google benchmark: https://github.com/google/benchmark

```bash
$ make benchmark
$ ./benchmark
Running ./benchmark
Run on (12 X 3192.01 MHz CPU s)
CPU Caches:
  L1 Data 32K (x6)
  L1 Instruction 32K (x6)
  L2 Unified 256K (x6)
  L3 Unified 12288K (x1)
Load Average: 0.29, 0.17, 0.11
--------------------------------------------------------
Benchmark              Time             CPU   Iterations
--------------------------------------------------------
BM_gcd              2.14 ns         2.14 ns    326945745
BM_gcd_small        12.0 ns         12.0 ns     58682034
BM_gcd_medium       62.9 ns         62.9 ns     11104283
BM_gcd_large         191 ns          191 ns      354183
```
