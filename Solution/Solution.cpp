#include "Solution.h"

int countHeight(TreeNode* node) {
    if (!node) {
        return 0;
    }
    if (!node->left && !node->right) {
        return 1;
    }
    return std::max(countHeight(node->left), countHeight(node->right)) + 1;
}

void levelOrder(TreeNode* node, int i) {
    if (!node) {
        return;
    }
    if (i == 0) {
        std::cout << node->val << std::endl;
    } else {
        levelOrder(node->left, i - 1);
        levelOrder(node->right, i - 1);
    }
}

std::vector<int> Solution::rightSideView(TreeNode *root) {
    if (!root) {
        return std::vector<int>();
    }

    int height = countHeight(root);
    for (int i = 0; i < height; ++i) {
        levelOrder(root, i);
    }
}
