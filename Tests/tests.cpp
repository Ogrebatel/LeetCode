#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<std::string> tokens = {"2","1","+","3","*"};
    int expected = 9;
    EXPECT_EQ(expected, sol.evalRPN(tokens));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<std::string> tokens = {"4","13","5","/","+"};
    int expected = 6;
    EXPECT_EQ(expected, sol.evalRPN(tokens));
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<std::string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    int expected = 22;
    EXPECT_EQ(expected, sol.evalRPN(tokens));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}