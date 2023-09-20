#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    int n = 2;
    int expected = 2;

    EXPECT_EQ(expected, sol.climbStairs(n));
}

TEST(Test, Example2) {
    Solution sol;
    int n = 3;
    int expected = 3;

    EXPECT_EQ(expected, sol.climbStairs(n));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}