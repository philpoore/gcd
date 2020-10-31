
all: tests benchmark

tests:
	g++ src/gcd.c src/tests.cpp -l gtest_main -l gtest -l pthread -o tests

benchmark:
	g++ src/gcd.c src/benchmark.cpp -l benchmark -l pthread -o benchmark


.PHONY: tests benchmark