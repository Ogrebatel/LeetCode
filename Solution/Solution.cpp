#include "Solution.h"

bool Solution::isSubsequence(std::string s, std::string t) {
    int j = 0;
    int tSize = t.size();
    if (s.empty()) {
        return true;
    }
    for (int i = 0; i < tSize; ++i) {
        if(t[i] == s[j]) {
            ++j;
        }
    }
    return j >= s.size();
}
