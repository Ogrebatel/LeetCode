#include "Solution.h"

int Solution::countHeight(TreeNode *node) {
    if (!node) {
        return 0;
    }
    if (!node->left && !node->right) {
        return 1;
    }
    return std::max(countHeight(node->left), countHeight(node->right)) + 1;
}

void Solution::zigzagLevelOrder(TreeNode *node, int i, std::vector<std::vector<int>> *vec) {
    if (!node) {
        return;
    }
    if (i == 0) {
        (*vec)[vec->size()-1].push_back(node->val);
    } else {
        levelOrder(node->left, i - 1, vec);
        levelOrder(node->right, i - 1, vec);
    }
}

std::vector<std::vector<int>> Solution::zigzaglevelOrder(TreeNode *root) {
    if (!root) {
        return {};
    }
    std::vector<std::vector<int>> result;
    int height = countHeight(root);
    for (int i = 0; i < height; ++i) {
        result.emplace_back(std::vector<int>());
        levelOrder(root, i, &result);
        if (i % 2) {
            std::reverse(result[result.size() - 1].begin(), result[result.size() - 1].end());
        }
    }
    return result;
}
