#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "egg", t = "add";
    EXPECT_TRUE(sol.isIsomorphic(s, t));
}

TEST(Test, Example2) {
    Solution sol;
    std::string s = "foo", t = "bar";
    EXPECT_FALSE(sol.isIsomorphic(s, t));
}

TEST(Test, Example3) {
    Solution sol;
    std::string s = "paper", t = "title";
    EXPECT_TRUE(sol.isIsomorphic(s, t));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}