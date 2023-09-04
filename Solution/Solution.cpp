#include "Solution.h"

BSTIterator::BSTIterator(TreeNode *root) : iter(root), last(root) {
    while (iter != nullptr) {
        _nodes.push(iter);
        lastVal = iter->val;
        iter = iter->left;
    }

    while (last->right) {
        last = last->right;
    }
}

int BSTIterator::next() {
    while (iter != nullptr) {
        _nodes.push(iter);
        iter = iter->left;
    }

    iter = _nodes.top();
    _nodes.pop();
    lastVal = iter->val;
    iter = iter->right;
    return lastVal;
}

bool BSTIterator::hasNext() {
    return !_nodes.empty() || lastVal != last->val;
}
