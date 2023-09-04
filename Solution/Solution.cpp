#include "Solution.h"

int Solution::kthSmallest(TreeNode *root, int k) {
    return inorder(root, &k).second;
}

std::pair<bool, int> Solution::inorder(TreeNode *node, int *k) {
    if (!node) {
        return {false, 0};
    }

    auto result = inorder(node->left, k);
    if (result.first) {
        return result;
    }
    --(*k);
    if (*k == 0) {
        return {true, node->val};
    }
    return inorder(node->right, k);
}