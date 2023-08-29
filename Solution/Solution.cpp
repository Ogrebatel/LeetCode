#include "Solution.h"

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
    std::map<int, int> numsMap;
    for (int i = 0; i < nums.size(); ++i) {
        if (numsMap.find(nums[i]) == numsMap.end()){
            numsMap[nums[i]] = i;
        } else {
            if (nums[i] + nums[i] == target) {
                return {numsMap[nums[i]], i};
            }
        }
    }

    auto fwdIter = numsMap.begin();
    auto bwdIter = numsMap.end();
    bwdIter--;

    while (fwdIter->first != bwdIter->first) {
        if (fwdIter->first + bwdIter->first > target) {
            bwdIter--;
        } else if (fwdIter->first + bwdIter->first < target) {
            fwdIter++;
        } else {
            return {fwdIter->second, bwdIter->second};
        }
    }

    return {};
}
