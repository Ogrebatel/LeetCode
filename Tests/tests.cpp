#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "()";
    EXPECT_TRUE(sol.isValid(s));
}

TEST(Test, Example2) {
    Solution sol;
    std::string s = "()[]{}";
    EXPECT_TRUE(sol.isValid(s));
}

TEST(Test, Example3) {
    Solution sol;
    std::string s = "(]";
    EXPECT_FALSE(sol.isValid(s));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}