#include "Solution.h"

bool Solution::isAnagram(std::string s, std::string t) {
    std::map<char, int> letters;
    for (const auto &letter: s) {
        letters[letter]++;
    }

    for (const auto &letter: t) {
        letters[letter]--;
        if (letters[letter] < 0) {
            return false;
        }
    }

    if (std::all_of(letters.begin(), letters.end(), [](std::pair<char, int> iter) {return iter.second == 0;})) {
        return true;
    } else {
        return false;
    }
}
