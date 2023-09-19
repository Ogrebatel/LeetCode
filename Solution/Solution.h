#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

class Solution {
 public:
    int searchInsert(std::vector<int> &nums, int target);

 private:
    int getCenterInd(int left, int right);
    int binarySearch(std::vector<int> &nums, int target);
};


#endif //LEETCODE_SOLUTION_H
