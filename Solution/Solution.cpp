#include "Solution.h"

int Solution::rob(std::vector<int> &nums) {
    if (nums.size() == 1) {
        return nums[0];
    }
    if (nums.size() == 2) {
        return std::max(nums[0], nums[1]);
    }

    std::vector<int> maxRob(nums.size());
    maxRob[0] = nums[0];
    maxRob[1] = std::max(nums[0], nums[1]);

    for (int i = 2; i < nums.size(); ++i) {
        maxRob[i] = std::max(maxRob[i - 2] + nums[i], maxRob[i - 1]);
    }
    return maxRob[maxRob.size() - 1];
}
