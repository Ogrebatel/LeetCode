#include "Solution.h"

std::string Solution::convert(std::string s, int numRows) {
    if (numRows == 1) {
        return s;
    }
    int i = 0;
    bool reverse = false;
    std::vector<std::string> strs(numRows);
    for (const auto &iter: s) {
        strs[i] += iter;
        if (!reverse) {
            if (i == numRows - 1) {
                --i;
                reverse = true;
            } else {
                ++i;
            }
        } else {
            if (i == 0) {
                ++i;
                reverse = false;
            } else {
                --i;
            }
        }
    }

    std::string result;
    for (const auto &iter: strs) {
        result += iter;
    }
    return result;
}
