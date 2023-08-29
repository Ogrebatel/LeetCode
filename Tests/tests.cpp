#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "anagram", t = "nagaram";
    EXPECT_TRUE(sol.isAnagram(s, t));
}

TEST(Test, Example2) {
    Solution sol;
    std::string s = "rat", t = "car";
    EXPECT_FALSE(sol.isAnagram(s, t));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}