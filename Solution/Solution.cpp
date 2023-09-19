#include "Solution.h"

bool Solution::nextIsBigger(const std::vector<int> &nums, int ind) {
    if (ind == nums.size() - 1)
        return false;
    return nums[ind + 1] > nums[ind];
}

bool Solution::prevIsBigger(const std::vector<int> &nums, int ind) {
    if (ind == 0)
        return false;
    return nums[ind - 1] > nums[ind];
}

int Solution::getCenterInd(int left, int right) {
    return left + (right - left) / 2;
}

int Solution::searchInsert(std::vector<int> &nums, int target) {
    return binarySearch(nums, target);
}

int Solution::binarySearch(std::vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    if (target <= nums[0]) {
        return 0;
    } else if (target > nums[nums.size() - 1]) {
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
        if (target < nums[center]) {
            right = center - 1;
            continue;
        }

        return center;
    }
}
