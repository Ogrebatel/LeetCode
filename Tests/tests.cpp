#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    std::vector<std::vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    std::vector<int> expected = {1,2,3,6,9,8,7,4,5};
    auto result = sol.spiralOrder(matrix);
    EXPECT_EQ(result.size(), expected.size());

    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(result[i], expected[i]);
    }
}

TEST(Test, Example2) {
    Solution sol;

    std::vector<std::vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    std::vector<int> expected = {1,2,3,4,8,12,11,10,9,5,6,7};
    auto result = sol.spiralOrder(matrix);
    EXPECT_EQ(result.size(), expected.size());

    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(result[i], expected[i]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}