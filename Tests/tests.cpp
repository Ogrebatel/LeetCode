#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {1,2,3};
    EXPECT_EQ(2, sol.minMoves2(nums));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {1,10,2,9};
    EXPECT_EQ(16, sol.minMoves2(nums));
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> nums = {1,0,0,8,6};
    EXPECT_EQ(14, sol.minMoves2(nums));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}