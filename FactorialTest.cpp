#include <gtest/gtest.h>

unsigned int factorial(unsigned int n) {
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

TEST(FactorialTests, HandlesZeroInput) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(8), 40320);
}
