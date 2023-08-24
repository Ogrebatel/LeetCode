#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> numbers = {2,7,11,15};
    std::vector<int> expected = {1, 2};
    EXPECT_EQ(expected[0], sol.twoSum(numbers, 9)[0]);
    EXPECT_EQ(expected[1], sol.twoSum(numbers, 9)[1]);
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> numbers = {2,3,4};
    std::vector<int> expected = {1, 3};
    EXPECT_EQ(expected[0], sol.twoSum(numbers, 6)[0]);
    EXPECT_EQ(expected[1], sol.twoSum(numbers, 6)[1]);
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> numbers = {-1, 0};
    std::vector<int> expected = {1, 2};
    EXPECT_EQ(expected[0], sol.twoSum(numbers, -1)[0]);
    EXPECT_EQ(expected[1], sol.twoSum(numbers, -1)[1]);
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}