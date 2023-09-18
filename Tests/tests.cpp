#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> digits = {1,2,3};
    std::vector<int> expected = {1,2,4};
    std::vector<int> result = sol.plusOne(digits);

    EXPECT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> digits = {9};
    std::vector<int> expected = {1,0};
    std::vector<int> result = sol.plusOne(digits);

    EXPECT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> digits = {4,3,2,1};
    std::vector<int> expected = {4,3,2,2};
    std::vector<int> result = sol.plusOne(digits);

    EXPECT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}