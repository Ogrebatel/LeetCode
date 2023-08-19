#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {3,2,3};
    EXPECT_EQ(3, sol.majorityElement(nums));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {2,2,1,1,1,2,2};
    EXPECT_EQ(2, sol.majorityElement(nums));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}