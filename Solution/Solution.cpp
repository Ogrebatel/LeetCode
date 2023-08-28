#include "Solution.h"

int Solution::lengthOfLastWord(std::string s) {
    std::string str;
    std::stringstream ss(s);
    std::stack<std::string> v;
    while (getline(ss, str, ' ')) {
        if(!str.empty())
            v.push(str);
    }

    return v.top().size();
}
