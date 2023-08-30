#include "Solution.h"

std::vector<std::string> Solution::summaryRanges(std::vector<int> &nums) {
    if (nums.empty()) {
        return {};
    }
    int prevI = 0;
    std::vector<std::string> result;
    for (int i = 0; i < nums.size() - 1; ++i) {
        if(nums[i] + 1 == nums[i + 1]) {
            continue;
        } else {
            if (i != prevI) {
                result.emplace_back(std::string(std::to_string(nums[prevI]) + "->" + std::to_string(nums[i])));
            } else {
               result.emplace_back(std::string(std::to_string(nums[i])));
            }
        }
        prevI = i + 1;
    }

    if (prevI == nums.size() - 1) {
        result.emplace_back(std::string(std::to_string(nums[prevI])));
    } else {
        result.emplace_back(std::string(std::to_string(nums[prevI]) + "->" + std::to_string(nums[nums.size() - 1])));
    }

    return result;
}
