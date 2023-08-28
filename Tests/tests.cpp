#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example3) {
    Solution sol;
    std::string haystack = "mississippi";
    std::string needle = "issip";
    EXPECT_EQ(4, sol.strStr(haystack, needle));
}

TEST(Test, Example1) {
    Solution sol;
    std::string haystack = "sadbutsad";
    std::string needle = "sad";
    EXPECT_EQ(0, sol.strStr(haystack, needle));
}

TEST(Test, Example2) {
    Solution sol;
    std::string haystack = "leetcode";
    std::string needle = "leeto";
    EXPECT_EQ(-1, sol.strStr(haystack, needle));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}