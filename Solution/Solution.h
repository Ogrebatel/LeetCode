#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <map>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>> &board);

private:
    std::map<char, bool> _check;

    void dropChecker();
};


#endif //LEETCODE_SOLUTION_H
