#include "Solution.h"

int Solution::getLeft (TreeNode* node) {
    while (node->left) {
        node = node->left;
    }
    return node->val;
}

int Solution::getRight(TreeNode *node) {
    while (node->right) {
        node = node->right;
    }
    return node->val;
}

bool Solution::isValidBST(TreeNode* root) {
    return preorder(root);
}

bool Solution::preorder(TreeNode *node) {
    if (!node) {
        return true;
    }

    if (node->left && getRight(node->left) >= node->val) {
        return false;
    }

    if (node->right && getLeft(node->right) <= node->val) {
        return false;
    }

    return preorder(node->left) && preorder(node->right);
}
