#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, test_for_test) {
    Solution sol;

    std::vector<int> nums = {3,2,2,3};
    int val = 3;
    EXPECT_EQ(sol.removeElement(nums, val), 2);
    for (int &num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

TEST(Test, example2) {
    Solution sol;

    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    EXPECT_EQ(sol.removeElement(nums, val), 5);
    for (int &num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}