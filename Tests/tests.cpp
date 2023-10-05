#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example4) {
    Solution sol;
    std::vector<int> nums = {1,3};
    int target = 3;
    int expected = 1;

    EXPECT_EQ(expected, sol.search(nums, target));
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> nums = {1};
    int target = 0;
    int expected = -1;

    EXPECT_EQ(expected, sol.search(nums, target));
}

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int expected = 4;

    EXPECT_EQ(expected, sol.search(nums, target));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {4,5,6,7,0,1,2};
    int target = 3;
    int expected = -1;

    EXPECT_EQ(expected, sol.search(nums, target));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}