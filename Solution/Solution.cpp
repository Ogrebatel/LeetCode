#include "Solution.h"


bool Solution::wordPattern(std::string pattern, std::string s) {

    std::map<char, std::string> equalityS;
    std::map<std::string, char> equalityT;
    if (s.size() != t.size()) {
        return false;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (equalityS.find(s[i]) != equalityS.end() || equalityT.find(t[i]) != equalityT.end()) {
            if (t[i] != equalityS[s[i]] || s[i] != equalityT[t[i]]) {
                return false;
            }
        } else {
            equalityS[s[i]] = t[i];
            equalityT[t[i]] = s[i];
        }
    }
    return true;
    return false;
}
