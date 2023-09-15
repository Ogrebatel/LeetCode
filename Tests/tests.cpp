#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    EXPECT_EQ(3, sol.hammingWeight(11));
}

TEST(Test, Example2) {
    Solution sol;

    EXPECT_EQ(1, sol.hammingWeight(128));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}