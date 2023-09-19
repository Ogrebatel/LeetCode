#include "Solution.h"

int Solution::getCenterInd(int left, int right) {
    return left + (right - left) / 2;
}

int Solution::searchInsert(std::vector<int> &nums, int target) {
    return binarySearch(nums, target);
}

int Solution::binarySearch(std::vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;

    if (target > nums[nums.size() - 1]) {
        return nums.size();
    }

    while (true) {
        int center = getCenterInd(left, right);

        if (left == right) {
            return center;
        }

        if (target > nums[center]) {
            left = center + 1;
            continue;
        }

        if (target <= nums[center]) {
            right = center;
            continue;
        }
    }
}
