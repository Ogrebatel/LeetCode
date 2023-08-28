#include "Solution.h"

std::string Solution::longestCommonPrefix(std::vector<std::string> &strs) {
    std::string result;
    int minStrLen = INT_MAX;
    for (auto & str : strs) {
        if (str.size() < minStrLen) {
            minStrLen = static_cast<int>(str.size());
        }
    }

    for (int i = 0; i < minStrLen; ++i) {
        char curChar = strs[0][i];
        for (int j = 1; j < strs.size(); ++j) {
            if (strs[j][i] != curChar) {
                return result;
            }
        }
        result += curChar;
    }
    return result;
}
