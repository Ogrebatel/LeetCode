#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {1,3,5,6};
    int expected = 1;
    int result = sol.searchInsert(nums, 2);

    EXPECT_EQ(expected, result);
}


TEST(Test, Example1) {
        Solution sol;
    std::vector<int> nums = {1,3,5,6};
    int expected = 2;
    int result = sol.searchInsert(nums, 5);

    EXPECT_EQ(expected, result);
}


TEST(Test, Example3) {
    Solution sol;
    std::vector<int> nums = {1,3,5,6};
    int expected = 4;
    int result = sol.searchInsert(nums, 7);

    EXPECT_EQ(expected, result);
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}