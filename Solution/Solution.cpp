#include "Solution.h"

bool Solution::containsNearbyDuplicate(std::vector<int> &nums, int k) {
    std::map<int, int> numsMap;

    for (int i = 0; i < nums.size(); ++i) {
        if (numsMap.find(nums[i]) == numsMap.end()) {
            numsMap[nums[i]] = i;
        } else {
            if (i - numsMap[nums[i]] <= k) {
                return true;
            } else {
                numsMap[nums[i]] = i;
            }
        }
    }

    return false;
}
