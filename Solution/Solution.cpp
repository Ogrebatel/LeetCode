#include "Solution.h"

std::string Solution::reverseWords(std::string s) {
    std::string result;
    std::string str;
    std::stringstream ss(s);
    std::vector<std::string> v;
    while (getline(ss, str, ' ')) {
        if(!str.empty())
            v.emplace_back(str);
    }
    std::reverse(v.begin(), v.end());
    for (const auto &strIter : v) {
        result += strIter + " ";
    }
    result.pop_back();
    return result;
}
