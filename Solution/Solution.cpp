#include "Solution.h"

int Solution::majorityElement(std::vector<int> &nums) {
    int element;
    int count = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (count == 0) {
            element = nums[i];
            count++;
            continue;
        }

        if (element == nums[i]) {
            count++;
        } else {
            count--;
        }
    }
    return element;
}
