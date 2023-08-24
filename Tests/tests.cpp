#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {2,3,1,1,4};
    EXPECT_TRUE(sol.canJump(nums));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {3,2,1,0,4};
    EXPECT_FALSE(sol.canJump(nums));
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> nums = {1,1,0,1};
    EXPECT_FALSE(sol.canJump(nums));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}