#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string ransomNote = "a", magazine = "b";
    EXPECT_FALSE(sol.canConstruct(ransomNote, magazine));
}

TEST(Test, Example2) {
    Solution sol;
    std::string ransomNote = "aa", magazine = "ab";
    EXPECT_FALSE(sol.canConstruct(ransomNote, magazine));
}

TEST(Test, Example3) {
    Solution sol;
    std::string ransomNote = "aa", magazine = "aab";
    EXPECT_TRUE(sol.canConstruct(ransomNote, magazine));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}