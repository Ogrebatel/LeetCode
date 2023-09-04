#include "Solution.h"

int getMin(TreeNode *node) {
    while (node->left) {
        node = node->left;
    }
    return node->val;
}

int getMax(TreeNode *node) {
    while (node->right) {
        node = node->right;
    }
    return node->val;
}

int Solution::getMinimumDifference(TreeNode *root) {
    if (root->left && root->right) {
        int max = getMax(root->left);
        int min = getMin(root->right);

        return std::min(
                std::min(min - root->val, root->val - max),
                std::min(getMinimumDifference(root->left), getMinimumDifference(root->right))
        );

    } else if (root->left) {
        int max = getMax(root->left);
        return std::min(root->val - max, getMinimumDifference(root->left));

    } else if (root->right) {
        int min = getMin(root->right);
        return std::min(min - root->val, getMinimumDifference(root->right));

    } else {
        return INT_MAX;
    }
}
