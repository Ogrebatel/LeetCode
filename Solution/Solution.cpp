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

    std::map<char, std::string> equalityS;
    std::map<std::string, char> equalityT;
    if (s.size() != v.size()) {
        return false;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (equalityS.find(s[i]) != equalityS.end() || equalityT.find(v[i]) != equalityT.end()) {
            if (v[i] != equalityS[s[i]] || s[i] != equalityT[v[i]]) {
                return false;
            }
        } else {
            equalityS[s[i]] = v[i];
            equalityT[v[i]] = s[i];
        }
    }
    return true;
    return false;
}
