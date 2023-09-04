#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    TreeNode node1(3);
    TreeNode node2(9);
    TreeNode node3(20);
    TreeNode node4(15);
    TreeNode node5(7);

    node1.left = &node2;
    node1.right = &node3;

    node3.left = &node4;
    node3.right = &node5;

    auto result = sol.averageOfLevels(&node1);
    for (const auto &iter: result) {
        std::cout << iter << " ";
    }
//    EXPECT_EQ(4, sol.solution(2, 2));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}