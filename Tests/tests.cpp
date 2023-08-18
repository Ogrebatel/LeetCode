#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {1,1,2};
    EXPECT_EQ(2, sol.removeDuplicates(nums));

    for (auto &num: nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

TEST(Test, Example0) {
    Solution sol;
    std::vector<int> nums = {1,2};
    EXPECT_EQ(2, sol.removeDuplicates(nums));

    for (auto &num: nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    EXPECT_EQ(5, sol.removeDuplicates(nums));

    for (auto &num: nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}