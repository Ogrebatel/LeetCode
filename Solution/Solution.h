#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <utility>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int kthSmallest(TreeNode *root, int k);
    std::pair<bool, int> inorder(TreeNode *node, int* k);
};


#endif //LEETCODE_SOLUTION_H
