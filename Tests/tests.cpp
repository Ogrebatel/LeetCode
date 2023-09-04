#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    TreeNode node1(1);
    TreeNode node2(2);
    TreeNode node3(3);
    TreeNode node4(4);
    TreeNode node5(5);
    TreeNode node6(6);

    node1.right = &node2;
    node1.right = &node3;

    node2.right = &node5;
    node3.right = &node4;

    node5.right = &node6;
    auto result = sol.rightSideView(&node1);
    for (const auto &iter: result) {
        std::cout << iter << " ";
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}