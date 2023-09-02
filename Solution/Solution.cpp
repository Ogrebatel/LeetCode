#include "Solution.h"

int Solution::sumNumbers(TreeNode *root) {
    if (!root) {
        return 0;
    } else if (!root->left && !root->right) {
        return root->val;
    }
    return sumNumbers(root->left, root->val) + sumNumbers(root->right, root->val);
}

int Solution::sumNumbers(TreeNode *root, int val) {
    if (!root) {
        return 0;
    }
    if (!root->left && !root->right) {
        return val * 10 + root->val;
    }

    return sumNumbers(root->left, val * 10 + root->val) + sumNumbers(root->right, val * 10 + root->val);
}
