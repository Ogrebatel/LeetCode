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
    EXPECT_EQ(1, sol.kthSmallest(&node1, 1));
    EXPECT_EQ(2, sol.kthSmallest(&node1, 2));
    EXPECT_EQ(3, sol.kthSmallest(&node1, 3));
    EXPECT_EQ(4, sol.kthSmallest(&node1, 4));
    EXPECT_EQ(6, sol.kthSmallest(&node1, 5));

}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}