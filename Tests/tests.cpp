#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    int left = 5;
    int right = 7;
    EXPECT_EQ(4, sol.rangeBitwiseAnd(left, right));
}

TEST(Test, Example2) {
    Solution sol;
    int left = 0;
    int right = 0;
    EXPECT_EQ(0, sol.rangeBitwiseAnd(left, right));
}

TEST(Test, Example3) {
    Solution sol;
    int left = 5;
    int right = 2147483647;
    EXPECT_EQ(0, sol.rangeBitwiseAnd(left, right));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}