#include "Solution.h"

int Solution::minMoves2(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    int median = nums.size() % 2? nums[nums.size() / 2]: (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2;

    int countOperations = 0;

    for(const auto &iter: nums) {
        countOperations += std::abs(median - iter);
    }

    return countOperations;
}
