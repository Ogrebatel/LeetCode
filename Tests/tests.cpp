#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    std::vector<int> nums = {1,2,3,1};
    int expected = 4;

    EXPECT_EQ(expected, sol.rob(nums));
}

TEST(Test, Example2) {
    Solution sol;

    std::vector<int> nums = {2,7,9,3,1};
    int expected = 12;

    EXPECT_EQ(expected, sol.rob(nums));
}

TEST(Test, Example3) {
    Solution sol;

    std::vector<int> nums = {2,1,1,2};
    int expected = 4;

    EXPECT_EQ(expected, sol.rob(nums));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}