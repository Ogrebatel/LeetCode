#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string digits = "23";
    std::vector<std::string> expected = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    auto result = sol.letterCombinations(digits);
    EXPECT_EQ(result.size(), expected.size());
    for (const auto &item: expected) {
        EXPECT_TRUE(std::find(result.begin(), result.end(), item) != result.end());
    }
}

TEST(Test, Example3) {
    Solution sol;
    std::string digits = "234";
//    std::vector<std::string> expected = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    auto result = sol.letterCombinations(digits);
//    EXPECT_EQ(result.size(), expected.size());
//    for (const auto &item: expected) {
//        EXPECT_TRUE(std::find(result.begin(), result.end(), item) != result.end());
//    }
}

TEST(Test, Example2) {
    Solution sol;
    std::string digits = "";
    std::vector<std::string> expected = {};
    auto result = sol.letterCombinations(digits);
    EXPECT_EQ(result.size(), expected.size());
    for (const auto &item: expected) {
        EXPECT_TRUE(std::find(result.begin(), result.end(), item) != result.end());
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}