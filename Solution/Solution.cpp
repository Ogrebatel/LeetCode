#include "Solution.h"

std::vector<std::string> Solution::fullJustify(std::vector<std::string> &words, int maxWidth) {
    std::vector<std::string> result;
    std::vector<std::string> curWords;
    int curWidth = 0;

    for (const auto &word: words) {
        curWidth += word.size() + 1;
        if (curWidth - 1 <= maxWidth) {
            curWords.push_back(word);
            continue;
        } else {
            curWidth = curWidth - word.size() - 1 - curWords.size();
            int spaces = maxWidth - curWidth;

            if (curWords.size() != 1) {
                for (int i = 0; i < spaces; ++i) {
                    curWords[i % (curWords.size() - 1)] += " ";
                }
            } else {
                for (int i = 0; i < spaces; ++i) {
                    curWords[0] += " ";
                }
            }

            result.emplace_back(std::string());
            for (const auto &curWord: curWords) {
                result[result.size() - 1] += curWord;
            }

            curWords.clear();
            curWidth = word.size() + 1;
            curWords.push_back(word);
        }
    }

    result.emplace_back(std::string());
    for (auto word: curWords) {
        result[result.size() - 1] += (word + " ");
    }
    result[result.size() - 1].pop_back();
    for (int i = 0; result[result.size() - 1].size() < maxWidth; ++i) {
        result[result.size() - 1] += " ";
    }

    return result;
}
