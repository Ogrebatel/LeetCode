#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    std::vector<std::vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    std::vector<std::vector<int>> expected = {{1,0,1},{0,0,0},{1,0,1}};
    sol.setZeroes(matrix);
    for (int i = 0; i < expected.size(); ++i) {
        for (int j = 0; j < expected[0].size(); ++j) {
            EXPECT_EQ(matrix[i][j], expected[i][j]);
        }
    }
}

TEST(Test, Example2) {
    Solution sol;

    std::vector<std::vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    std::vector<std::vector<int>> expected = {{0,0,0,0},{0,4,5,0},{0,3,1,0}};
    sol.setZeroes(matrix);
    for (int i = 0; i < expected.size(); ++i) {
        for (int j = 0; j < expected[0].size(); ++j) {
            EXPECT_EQ(matrix[i][j], expected[i][j]);
        }
    }
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}