#include "Solution.h"

std::vector<int> Solution::twoSum(std::vector<int> &numbers, int target) {
    int i = 0;
    int j = numbers.size() - 1;

    while(true) {
        if (numbers[i] + numbers[j] < target) {
            ++i;
        } else if (numbers[i] + numbers[j] > target) {
            --j;
        } else {
            return {++i, ++j};
        }
    }
}
