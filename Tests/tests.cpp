#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
     int num = 3;
     std::string expected = "III";
    EXPECT_EQ(expected, sol.intToRoman(num));
}

TEST(Test, Example2) {
    Solution sol;
    int num = 58;
    std::string expected = "LVIII";
    EXPECT_EQ(expected, sol.intToRoman(num));
}

TEST(Test, Example3) {
    Solution sol;
    int num = 1994;
    std::string expected = "MCMXCIV";
    EXPECT_EQ(expected, sol.intToRoman(num));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}