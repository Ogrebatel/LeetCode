#include "Solution.h"

//int Solution::maxDepth(TreeNode *root) {
//    if (root == nullptr) {
//        return 0;
//    }
//
//    int leftDepth = maxDepth(root->left);
//    int rightDepth = maxDepth(root->right);
//    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
//}

int Solution::maxDepth(TreeNode *root) {
    if (root == nullptr)
        return 0;

    std::stack<std::pair<TreeNode*, int>> nodeStack;
    nodeStack.push({root, 1});
    int len = 1;

    while (!nodeStack.empty()) {
        std::pair<TreeNode*, int> front = nodeStack.top();
        nodeStack.pop();
        len = std::max(len, front.second);
        if (front.first->left != nullptr)
            nodeStack.push({front.first->left, front.second + 1});
        if (front.first->right != nullptr)
            nodeStack.push({front.first->right, front.second + 1});
    }

    return len;
}
