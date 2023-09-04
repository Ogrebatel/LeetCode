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

void levelOrder(TreeNode* node, int i, std::vector<int> *vec) {
    if (!node) {
        return;
    }
    if (i == 0) {
        vec->push_back(node->val);
    } else {
        levelOrder(node->left, i - 1, vec);
        levelOrder(node->right, i - 1, vec);
    }
}


std::vector<double> Solution::averageOfLevels(TreeNode *root) {
    if (!root) {
        return {};
    }
    std::vector<double> result;
    int height = countHeight(root);
    for (int i = 0; i < height; ++i) {
        std::vector<int> tmp;
        levelOrder(root, i, &tmp);
        double sum = 0;
        for (const auto &iter: tmp) {
            sum += iter;
        }
        result.push_back(sum / tmp.size());
    }
    return result;
}
