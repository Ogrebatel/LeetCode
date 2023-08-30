#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    MinStack stack;

    stack.push(-2);
    stack.push(0);
    stack.push(-3);
    EXPECT_EQ(-3, stack.getMin());
    stack.pop();
    EXPECT_EQ(0, stack.top());
    EXPECT_EQ(-2, stack.getMin());
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}