#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

class Solution {
 public:
    Solution();
    std::vector<std::string> letterCombinations(std::string digits);

private:
    std::vector<std::vector<std::string>> _letters;
};


#endif //LEETCODE_SOLUTION_H
