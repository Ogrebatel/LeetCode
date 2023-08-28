#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<std::string> strs = {"flower","flow","flight"};
    EXPECT_EQ("fl", sol.longestCommonPrefix(strs));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<std::string> strs = {"dog","racecar","car"};
    EXPECT_EQ("", sol.longestCommonPrefix(strs));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}