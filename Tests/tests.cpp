#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "the sky is blue";
    EXPECT_EQ("blue is sky the", sol.reverseWords(s));
}

TEST(Test, Example2) {
    Solution sol;
    std::string s = "  hello world  ";
    EXPECT_EQ("world hello", sol.reverseWords(s));
}

TEST(Test, Example3) {
    Solution sol;
    std::string s = "a good   example";
    EXPECT_EQ("example good a", sol.reverseWords(s));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}