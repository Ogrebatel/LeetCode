#include "Solution.h"

bool Solution::isPalindrome(std::string s) {
    std::cout << s << std::endl;
    std::transform(s.begin(), s.end(), s.begin(),
                   [](char c) { return tolower(c); } );
    s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return !std::isalnum(c); } ), s.end());


    std::cout << s << std::endl;
    for (int i = 0; i < s.size() / 2; ++i) {
        std::cout << s[i] << " : " << s[s.size() - 1 - i] << std::endl;
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}
