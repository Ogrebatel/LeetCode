#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>


class Solution {
 public:
    Solution();

    std::string intToRoman(int num);

private:
    const std::vector<std::pair<int, std::string>> _intToRoman;
};


#endif //LEETCODE_SOLUTION_H
