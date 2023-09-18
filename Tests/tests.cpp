#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "III";
    int expected = 3;
    int result = sol.romanToInt(s);
    EXPECT_EQ(expected, result);
}

TEST(Test, Example3) {
    Solution sol;
    std::string s = "LVIII";
    int expected = 58;
    int result = sol.romanToInt(s);
    EXPECT_EQ(expected, result);
}

TEST(Test, Example4) {
    Solution sol;
    std::string s = "MCMXCIV";
    int expected = 1994;
    int result = sol.romanToInt(s);
    EXPECT_EQ(expected, result);
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}