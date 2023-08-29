#include "Solution.h"


bool Solution::wordPattern(std::string pattern, std::string s) {
    std::string result;
    std::string str;
    std::stringstream ss(s);
    std::vector<std::string> v;
    while (getline(ss, str, ' ')) {
        if(!str.empty())
            v.emplace_back(str);
    }

    std::map<char, std::string> equalityOfPattern;
    std::map<std::string, char> equalityOfChar;
    if (pattern.size() != v.size()) {
        return false;
    }
    for (int i = 0; i < pattern.size(); ++i) {
        if (equalityOfPattern.find(pattern[i]) != equalityOfPattern.end() || equalityOfChar.find(v[i]) != equalityOfChar.end()) {
            if (v[i] != equalityOfPattern[pattern[i]] || pattern[i] != equalityOfChar[v[i]]) {
                return false;
            }
        } else {
            equalityOfPattern[pattern[i]] = v[i];
            equalityOfChar[v[i]] = pattern[i];
        }
    }
    return true;
}
