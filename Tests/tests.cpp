#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "abcabcbb";

    EXPECT_EQ(3, sol.lengthOfLongestSubstring(s));
}

TEST(Test, Example2) {
    Solution sol;
    std::string s = "bbbbb";

    EXPECT_EQ(1, sol.lengthOfLongestSubstring(s));
}

TEST(Test, Example3) {
    Solution sol;
    std::string s = "pwwkew";

    EXPECT_EQ(3, sol.lengthOfLongestSubstring(s));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}