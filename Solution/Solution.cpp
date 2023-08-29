#include "Solution.h"

bool Solution::canConstruct(std::string ransomNote, std::string magazine) {
    std::map<char, int> letters;
    for (const auto &letter: magazine) {
        letters[letter]++;
    }

    for (const auto &letter: ransomNote) {
        letters[letter]--;
        if (letters[letter] < 0) {
            return false;
        }
    }
    return true;
}
