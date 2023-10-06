#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {3,4,5,1,2};
    int expected = 1;

    EXPECT_EQ(expected, sol.findMin(nums));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {4,5,6,7,0,1,2};
    int expected = 0;

    EXPECT_EQ(expected, sol.findMin(nums));
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> nums = {11,13,15,17};
    int expected = 11;

    EXPECT_EQ(expected, sol.findMin(nums));
}

TEST(Test, Example4) {
    Solution sol;
    std::vector<int> nums = {11,13};
    int expected = 11;

    EXPECT_EQ(expected, sol.findMin(nums));
}

TEST(Test, Example5) {
    Solution sol;
    std::vector<int> nums = {13,11};
    int expected = 11;

    EXPECT_EQ(expected, sol.findMin(nums));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}