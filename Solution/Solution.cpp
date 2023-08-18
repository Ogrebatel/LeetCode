#include "Solution.h"

int Solution::removeDuplicates(std::vector<int> &nums) {
    int curIdx = 0;
    int count = 0;
    int i = 0;
    while(i < nums.size()) {
        if (nums[curIdx] == nums[i]) {

            while(i < nums.size() && nums[curIdx] == nums[i]) {
                i++;
            }

            if(i >= nums.size()) {
                count++;
                return count;
            }
            curIdx++;
            nums[curIdx] = nums[i];
            count++;

        } else {
            i++;
        }
    }
    return count;
}
