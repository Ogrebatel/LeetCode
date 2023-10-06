#include "Solution.h"

int Solution::findMin(std::vector<int> &nums) {
    int leftIdx = 0;
    int rightIdx = nums.size() - 1;

    while (true) {

        int centerIdx = (rightIdx - leftIdx) / 2 + leftIdx;

        if (nums[centerIdx] > nums[leftIdx] && nums[centerIdx] > nums[rightIdx]) {
            leftIdx = centerIdx + 1;
        } else if (nums[centerIdx] < nums[leftIdx] && nums[centerIdx] < nums[rightIdx]) {
            rightIdx = centerIdx;
        } else if (nums[leftIdx] <= nums[rightIdx]) {
            return nums[leftIdx];
        } else {
            return nums[rightIdx];
        }
    }
}
