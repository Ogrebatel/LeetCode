#include "Solution.h"

std::vector<std::vector<int>> Solution::threeSum(std::vector<int> &nums) {
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    for (int k = 0; k < nums.size(); ++k) {
        int i = 0;
        int j = static_cast<int>(nums.size()) - 1;
        while (i != j) {
            if (nums[i] + nums[j] + nums[k] > 0) {
                --j;
            } else if (nums[i] + nums[j] + nums[k] < 0) {
                ++i;
            } else {
                result.push_back({nums[k], nums[i], nums[j]});
                ++i;
            }
        }
    }
    for (auto &triplet: result) {
        std::sort(triplet.begin(), triplet.end());
    }
    std::erase
    return result;
}
