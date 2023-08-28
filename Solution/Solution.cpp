#include "Solution.h"

int Solution::minSubArrayLen(int target, std::vector<int> &nums) {
    int minWindow = nums.size() + 1;

    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum >= target) {
            minWindow = i + 1;
            break;
        }
    }
    if (sum < target) {
        return 0;
    }

    int curSum = sum;
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (i + minWindow == nums.size()) {
            curSum = curSum - nums[i];
            if (curSum >= target) {
                --minWindow;
            } else {
                return minWindow;
            }
        } else {
            curSum = curSum - nums[i] + nums[i + minWindow];
            if (curSum >= target) {
                while (true) {
                    curSum -= nums[i + 1];
                    if (curSum >= target) {
                        --minWindow;
                        ++i;
                    } else {
                        curSum += nums[i + 1];
                        break;
                    }
                }
            }
        }
    }

    return minWindow;
}
