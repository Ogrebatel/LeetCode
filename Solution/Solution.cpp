#include "Solution.h"

TreeNode *Solution::invertTree(TreeNode *root) {
    if (!root) {
        return nullptr;
    }
    std::swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
