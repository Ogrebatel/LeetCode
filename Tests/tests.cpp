#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<std::vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 3;
    bool expected = true;
    EXPECT_EQ(expected, sol.searchMatrix(matrix, target));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<std::vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 13;
    bool expected = false;
    EXPECT_EQ(expected, sol.searchMatrix(matrix, target));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}