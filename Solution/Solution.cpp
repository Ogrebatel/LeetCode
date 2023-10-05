#include "Solution.h"

bool Solution::isBiggerThanNext(std::vector<int> &nums, int idx) {
    if (idx == nums.size() - 1) {
        return true;
    }
    return nums[idx] > nums[idx + 1];
}

int Solution::search(std::vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (true) {
        if (left == right) {
            break;
        }
        int center = left + (right - left) / 2;
        if (!isBiggerThanNext(nums, center) && nums[center] >= nums[left]) {
            left = center + 1;
            continue;
        }

        if (!isBiggerThanNext(nums, center) && nums[center] < nums[left]) {
            right = center;
            continue;
        }
        break;
    }
    int peak = left + (right - left) / 2;

    if (nums.size() == 1) {
        if (nums[0] == target) {
            return 0;
        } else {
            return -1;
        }
    }
    if (target < nums[0]) {
        left = peak + 1;
        right = nums.size() - 1;
    } else {
        left = 0;
        right = peak;
    }

    while (true) {
        int center = left + (right - left) / 2;

        if (left == right) {
            if (nums[left] == target) {
                return left;
            } else {
                return -1;
            }
        }

        if (target < nums[center]) {
            right = center;
            continue;
        }
        if (target > nums[center]) {
            left = center + 1;
            continue;
        }

        return center;
    }
}
