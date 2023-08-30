#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    int n = 19;
    EXPECT_TRUE(sol.isHappy(n));
}

TEST(Test, Example2) {
    Solution sol;
    int n = 2;
    EXPECT_FALSE(sol.isHappy(n));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}