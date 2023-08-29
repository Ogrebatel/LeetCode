#include "Solution.h"

std::vector<std::vector<std::string>> Solution::groupAnagrams(std::vector<std::string> &strs) {
    std::map<std::string, std::vector<std::string>> anagramsMap;
    std::vector<std::vector<std::string>> result;
    for (const auto &str: strs) {
        auto sorted = str;
        std::sort(sorted.begin(), sorted.end());
        anagramsMap[sorted].push_back(str);
    }

    for (const auto &pair: anagramsMap) {
        result.emplace_back(pair.second);
    }

    return result;
}
