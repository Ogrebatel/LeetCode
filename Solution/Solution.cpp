#include "Solution.h"

int Solution::romanToInt(std::string s) {
    int result = 0;
    int prevValue = M;

    for (const auto &iter: s) {
        int curValue = getValFromRoman(iter);
        result += curValue;
        if (curValue > prevValue) {
            result = result - (prevValue * 2);
        }
        prevValue = curValue;
    }

    return result;
}

int Solution::getValFromRoman(char sym) {
    switch (sym) {
        case 'I':
            return I;
        case 'V':
            return V;
        case 'X':
            return X;
        case 'L':
            return L;
        case 'C':
            return C;
        case 'D':
            return D;
        case 'M':
            return M;
        default:
            return 0;
    }
}
