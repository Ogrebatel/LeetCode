#include "Solution.h"

int Solution::lengthOfLongestSubstring(std::string s) {
    int longest = 0;
    int current = 0;
    for (int i = 0; i < s.size(); ++i) {
        current++;
        for (int j = i - current + 1; j < i; ++j) {
            if (s[j] != s[i]) {
                continue;
            } else {
                current = i - j;
                break;
            }
        }
        if (longest < current) {
            longest = current;
        }
    }
    return longest;
}
