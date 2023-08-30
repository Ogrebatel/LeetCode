#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1, 3},
                                               {6, 9}};
    std::vector<int> newInterval = {2, 5};
    std::vector<std::vector<int>> expected = {{1, 5},
                                              {6, 9}};
    auto result = sol.insert(intervals, newInterval);
    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < result.size(); ++i) {
        EXPECT_EQ(result[i][0], expected[i][0]);
        EXPECT_EQ(result[i][1], expected[i][1]);
    }
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    std::vector<int> newInterval = {4, 8};
    std::vector<std::vector<int>> expected = {{1,  2},
                                              {3,  10},
                                              {12, 16}};
    auto result = sol.insert(intervals, newInterval);
    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < result.size(); ++i) {
        EXPECT_EQ(result[i][0], expected[i][0]);
        EXPECT_EQ(result[i][1], expected[i][1]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}