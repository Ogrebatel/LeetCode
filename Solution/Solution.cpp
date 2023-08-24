#include "Solution.h"

int Solution::jump(std::vector<int> &nums) {
    if (nums.empty()) {
        return false;
    }

    int numsSize = nums.size();
    if(numsSize == 1) {
        return 0;
    }
    if(nums[0] >= numsSize - 1) {
        return 1;
    }

    int jumpCount = 1;

    int curJump = nums[0];
    int maxJump = 0;

    for (int i = 1; i < numsSize; ++i) {
        curJump--;
        if(nums[i] - curJump > maxJump) {
            if (nums[i] + i >= numsSize - 1) {
                return jumpCount + 1;
            }
            maxJump = nums[i] - curJump;
        }

        if(curJump == 0) {
            jumpCount++;
            if(i == numsSize - 1) {
                return jumpCount;
            }
            if(maxJump == 0) {
                return -1;
            }
            curJump = maxJump;
            maxJump = 0;
        }
    }
    return jumpCount;
}
