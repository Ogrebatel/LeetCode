#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "abc", t = "ahbgdc";
    EXPECT_TRUE(sol.isSubsequence(s, t));
}

TEST(Test, Example2) {
    Solution sol;
    std::string s = "axc", t = "ahbgdc";
    EXPECT_FALSE(sol.isSubsequence(s, t));
}

TEST(Test, Example3) {
    Solution sol;
    std::string s = "acb", t = "ahbgdc";
    EXPECT_FALSE(sol.isSubsequence(s, t));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}