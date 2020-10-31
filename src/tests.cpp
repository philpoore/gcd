#include <stdio.h>
#include <assert.h>
#include <gtest/gtest.h>

#include "gcd.h"

TEST(GCDTest, FirstTest) {
    EXPECT_EQ(gcd(10, 10), 10);
}

TEST(GCDTest, SimpleTests) {
    EXPECT_EQ(gcd(105, 252), 21);
    EXPECT_EQ(gcd(54, 24), 6);
}
