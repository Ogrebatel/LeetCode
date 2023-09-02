#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    TreeNode node1(4);
    TreeNode node2(9);
    TreeNode node3(5);
    TreeNode node4(1);
    TreeNode node5(0);

    node1.left = &node2;
    node1.right = &node5;

    node2.left = &node3;
    node2.right = &node4;

    EXPECT_EQ(1026, sol.sumNumbers(&node1));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}