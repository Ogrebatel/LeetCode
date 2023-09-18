#include "Solution.h"

Solution::Solution():
    _intToRoman({{1000, "M"}, {900, "CM"}, {500, "D"},
                 {400, "CD"}, {100, "C"}, {90, "XC"},
                 {50, "L"}, {40, "XL"}, {10, "X"},
                 {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}}) {}

std::string Solution::intToRoman(int num) {
    std::string romanNotation;
    for (const auto &iter: _intToRoman) {
        while (num >= iter.first) {
            romanNotation += iter.second;
            num -= iter.first;
        }
    }

    return romanNotation;
}
