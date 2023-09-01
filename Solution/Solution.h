#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

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
    bool isSymmetric(TreeNode *root);
private:
    bool _isSymmetric(TreeNode *a, TreeNode *b);
};


#endif //LEETCODE_SOLUTION_H
