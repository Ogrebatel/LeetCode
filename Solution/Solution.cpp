#include "Solution.h"

void Solution::setZeroes(std::vector<std::vector<int>> &matrix) {
    std::vector<std::pair<int, int>> zeroes;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] == 0) {
                zeroes.emplace_back(i,j);
            }
        }
    }

    for (const auto &item: zeroes) {
        for (int i = 0; i < matrix.size(); ++i) {
            matrix[i][item.second] = 0;
        }

        for (int i = 0; i < matrix[0].size(); ++i) {
            matrix[item.first][i] = 0;
        }
    }
}
