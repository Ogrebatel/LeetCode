#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

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
    std::vector<std::vector<int>> zigzaglevelOrder(TreeNode* root);

private:
    void levelOrder(TreeNode* node, int i, std::vector<std::vector<int>> *vec);
    int countHeight(TreeNode *node);
};


#endif //LEETCODE_SOLUTION_H
