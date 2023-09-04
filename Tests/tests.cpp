#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    TreeNode node1(4);
    TreeNode node2(2);
    TreeNode node3(6);
    TreeNode node4(1);
    TreeNode node5(3);

    node1.left = &node2;
    node1.right = &node3;

    node2.left = &node4;
    node2.right = &node5;

    EXPECT_EQ(1, sol.getMinimumDifference(&node1));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}