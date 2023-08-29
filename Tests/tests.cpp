#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    std::vector<int> expected = {0, 1};
    std::vector<int> result = sol.twoSum(nums, 9);
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {3,2,4};
    std::vector<int> expected = {1,2};
    std::vector<int> result = sol.twoSum(nums, 6);
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> nums = {3,3};
    std::vector<int> expected = {0, 1};
    std::vector<int> result = sol.twoSum(nums, 6);
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}