#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>



class Solution {
 public:

    enum romanToInt {
        I = 1,
        V = 5,
        X = 10,
        L = 50,
        C = 100,
        D = 500,
        M = 1000,
    };

    int romanToInt(std::string s);

private:
    int getValFromRoman(char sym);
};


#endif //LEETCODE_SOLUTION_H
