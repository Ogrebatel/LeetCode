#include "Solution.h"

std::vector<std::string> Solution::letterCombinations(std::string digits) {
    std::vector<std::string> result;
    for (const auto &item: digits) {
        int digit = item - 0x30;
        if (result.empty()) {
            for (const auto &letter: _letters[digit]) {
                result.push_back(letter);
            }
        } else {
            std::vector<std::string> tmpRes = result;
            for (int i = 0; i < _letters[digit].size() - 1; ++i) {
                result.insert(result.end(), tmpRes.begin(), tmpRes.end());
            }

            for (int i = 0; i < result.size(); ++i) {
                result[i] += _letters[digit][i / (result.size() / _letters[digit].size())];
            }
        }
    }

    return result;
}

Solution::Solution() {
    _letters.emplace_back(std::vector<std::string>());
    _letters.emplace_back(std::vector<std::string>());
    _letters.emplace_back(std::vector<std::string>({"a", "b", "c"}));
    _letters.emplace_back(std::vector<std::string>({"d", "e", "f"}));
    _letters.emplace_back(std::vector<std::string>({"g", "h", "i"}));
    _letters.emplace_back(std::vector<std::string>({"j", "k", "l"}));
    _letters.emplace_back(std::vector<std::string>({"m", "n", "o"}));
    _letters.emplace_back(std::vector<std::string>({"p", "q", "r", "s"}));
    _letters.emplace_back(std::vector<std::string>({"t", "u", "v"}));
    _letters.emplace_back(std::vector<std::string>({"w", "x", "y", "z"}));
}
