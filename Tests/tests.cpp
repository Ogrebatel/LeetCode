#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    std::vector<int> nums = {100,4,200,1,3,2};

    EXPECT_EQ(4, sol.longestConsecutive(nums));
}

TEST(Test, Example2) {
    Solution sol;

    std::vector<int> nums = {0,3,7,2,5,8,4,6,0,1};

    EXPECT_EQ(9, sol.longestConsecutive(nums));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}