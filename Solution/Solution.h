#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

class Solution {
 public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);
 private:
    int getElement (std::vector<std::vector<int>> &matrix, int forwardIdx);
};


#endif //LEETCODE_SOLUTION_H
