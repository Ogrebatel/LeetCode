#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> nums = {1,2,3,4,5};

    EXPECT_EQ(3, sol.minSubArrayLen(11 ,nums));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {2,3,1,2,4,3};

    EXPECT_EQ(2, sol.minSubArrayLen(7 ,nums));
}

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {1,4,4};

    EXPECT_EQ(1, sol.minSubArrayLen(4 ,nums));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}