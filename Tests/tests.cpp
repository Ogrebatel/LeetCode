#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    TreeNode node1(5);
    TreeNode node2(4);
    TreeNode node3(6);
    TreeNode node4(3);
    TreeNode node5(7);

    node1.left = &node2;
    node1.right = &node3;

    node3.left = &node4;
    node3.right = &node5;
    EXPECT_FALSE(sol.isValidBST(&node1));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}