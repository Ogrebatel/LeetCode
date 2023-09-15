#include "Solution.h"

int Solution::singleNumber(std::vector<int> &nums) {
    int result = 0;
    for (const auto &item: nums) {
        result ^= item;
    }
    return result;
}
