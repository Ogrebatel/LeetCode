#include "Solution.h"

int Solution::strStr(std::string haystack, std::string needle) {
    if (needle.empty()) {
        return -1;
    }

    for (int i = 0; i < haystack.size(); ++i) {
        if (haystack[i] == needle[0]) {
            int j = 0;
            for (; j < needle.size(); ++j) {
                if (i + j == haystack.size() || haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needle.size()) {
                return i;
            }
        }
    }
    return -1;
}
