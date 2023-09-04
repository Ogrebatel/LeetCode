#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    TreeNode node1(7);
    TreeNode node2(3);
    TreeNode node3(15);
    TreeNode node4(9);
    TreeNode node5(20);

    node1.left = &node2;
    node1.right = &node3;

    node3.left = &node4;
    node3.right = &node5;

    BSTIterator sol(&node1);
    EXPECT_EQ(3, sol.next());
    EXPECT_EQ(7, sol.next());
    EXPECT_TRUE(sol.hasNext());
    EXPECT_EQ(9, sol.next());
    EXPECT_TRUE(sol.hasNext());
    EXPECT_EQ(15, sol.next());
    EXPECT_TRUE(sol.hasNext());
    EXPECT_EQ(20, sol.next());
    EXPECT_FALSE(sol.hasNext());
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}