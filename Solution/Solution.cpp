#include "Solution.h"

bool Solution::isSymmetric(TreeNode *root) {
    return _isSymmetric(root->left, root->right);
}

bool Solution::_isSymmetric(TreeNode *a, TreeNode *b) {
    if (a == nullptr && b == nullptr) {
        return true;
    }

    if ((a != nullptr && b == nullptr) || (a == nullptr && b != nullptr)) {
        return false;
    }

    if (a->val != b->val) {
        return false;
    }
    return _isSymmetric(a->left, b->right) && _isSymmetric(a->right, b->left);
}
