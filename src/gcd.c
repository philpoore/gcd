#include "gcd.h"

/**
 * Greatest common divisor

 * Returns the largest positive integer that divides each of the integers.
 * 
 * Implimentation taken from Euclids algorithm.
 * 
 * @link: https://en.wikipedia.org/wiki/Greatest_common_divisor
 * @link: https://en.wikipedia.org/wiki/Euclidean_algorithm
 **/ 
int gcd(int a, int b) {
    if (a == b) return a;

    int A = a > b ? a : b;  // max
    int B = a > b ? b : a;  // min

    while(A > B) {
        A = A - B;
        if (A < B) {
            // swap
            int t = A;
            A = B;
            B = t;
        }
    }
    return A;
}