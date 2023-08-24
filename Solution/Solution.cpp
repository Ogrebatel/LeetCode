#include "Solution.h"

bool Solution::canJump(std::vector<int> &nums) {
    if (nums.empty()) {
        return false;
    }
    int numsSize = nums.size();
    if(numsSize != 1 && nums[0] == 0) {
        return false;
    }

    int curJump = nums[0];
    int maxJump = 0;

    for (int i = 1; i < numsSize; ++i) {
        curJump--;
        if(nums[i] - curJump > maxJump) {
//            if (nums[i] + i >= numsSize - 1) {
//                return true;
//            }
            maxJump = nums[i] - curJump;
        }

        if(curJump == 0) {
            if(i == numsSize - 1) {
                return true;
            }
            if(maxJump == 0) {
                return false;
            }
            curJump = maxJump;
            maxJump = 0;
        }
    }
    return true;
}
