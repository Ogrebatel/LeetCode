#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    std::vector<std::vector<int>> expected = {{1,6}, {8,10}, {15, 18}};
    auto result = sol.merge(intervals);

    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i][0], result[i][0]);
        EXPECT_EQ(expected[i][1], result[i][1]);
    }
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1,4},{4,5}};
    std::vector<std::vector<int>> expected = {{1,5}};
    auto result = sol.merge(intervals);

    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i][0], result[i][0]);
        EXPECT_EQ(expected[i][1], result[i][1]);
    }
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1,4},{0,4}};
    std::vector<std::vector<int>> expected = {{0,4}};
    auto result = sol.merge(intervals);

    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i][0], result[i][0]);
        EXPECT_EQ(expected[i][1], result[i][1]);
    }
}

TEST(Test, Example4) {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1,4},{2,3}};
    std::vector<std::vector<int>> expected = {{1,4}};
    auto result = sol.merge(intervals);

    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i][0], result[i][0]);
        EXPECT_EQ(expected[i][1], result[i][1]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}