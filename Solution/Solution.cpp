#include "Solution.h"

int Solution::removeElement(std::vector<int> &nums, int val) {
    int lastIdx = nums.size() - 1;
    int count = 0;
    int i = 0;
    while(i <= lastIdx) {
        if (nums[i] == val) {
            nums[i] = nums[lastIdx];
            nums[lastIdx] = 0;
            lastIdx--;
            count++;
        } else {
            i++;
        }
    }
    return nums.size() - count;
}
