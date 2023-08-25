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
                if (j == k) {
                    --j;
                    continue;
                }
                if (i == k) {
                    i++;
                    continue;
                }
                result.push_back({nums[k], nums[i], nums[j]});
                ++i;
            }
        }
    }

    for(auto &it: result) {
        std::sort(it.begin(), it.end());
    }

    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b) -> bool {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] < b[i]) {
                return true;
            } else if (a[i] > b[i]) {
                return false;
            } else continue;
        }
        return false;
    });

    auto last = std::unique(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b) -> bool {
        return std::equal(a.begin(), a.end(), b.begin(), b.end());
    });

    result.erase(last, result.end());

    return result;
}
