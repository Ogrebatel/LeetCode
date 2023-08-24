#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    std::string s = "A man, a plan, a canal: Panama";

    Solution sol;

    EXPECT_TRUE(sol.isPalindrome(s));
}

TEST(Test, Example2) {
    std::string s = "0P";

    Solution sol;

    EXPECT_FALSE(sol.isPalindrome(s));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}