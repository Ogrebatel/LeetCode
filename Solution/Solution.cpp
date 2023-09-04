#include "Solution.h"

BSTIterator::BSTIterator(TreeNode *root) : iter(root) {
    while (iter) {
        _nodes.push(iter);
        iter = iter->left;
    }
}

int BSTIterator::next() {
    while (iter != nullptr) {
        _nodes.push(iter);
        iter = iter->left;
    }

    iter = _nodes.top();
    _nodes.pop();
    int val = iter->val;
    iter = iter->right;
    return val;
}

bool BSTIterator::hasNext() {
    return false;
}
