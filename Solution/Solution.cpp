#include "Solution.h"

std::vector<int> Solution::plusOne(std::vector<int> &digits) {
    auto item = digits.rbegin();
    for (; item != digits.rend() ;++item) {
        if (*item == 9) {
            *item = 0;
        } else {
            ++(*item);
            break;
        }
    }

    if (item == digits.rend()) {
        digits.push_back(0);
        digits[0] = 1;
    }

    return digits;
}
