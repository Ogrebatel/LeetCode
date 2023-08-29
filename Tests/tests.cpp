#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string pattern = "abba", s = "dog cat cat dog";
    EXPECT_TRUE(sol.wordPattern(pattern, s));
}

TEST(Test, Example2) {
    Solution sol;
    std::string pattern = "abba", s = "dog cat cat fish";
    EXPECT_FALSE(sol.wordPattern(pattern, s));

}

TEST(Test, Example3) {
    Solution sol;
    std::string pattern = "aaaa", s = "dog cat cat dog";
    EXPECT_FALSE(sol.wordPattern(pattern, s));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}