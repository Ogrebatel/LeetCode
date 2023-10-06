#include "Solution.h"

std::vector<int> Solution::spiralOrder(std::vector<std::vector<int>> &matrix) {
    if (matrix.empty()) {
        throw std::out_of_range("ERR: bad input.");
    }
    if (matrix[0].empty()) {
        throw std::out_of_range("ERR: bad input.");
    }
    int tmpSize = matrix[0].size();

    for (const auto &item: matrix) {
        if (item.size() != tmpSize) {
            throw std::out_of_range("ERR: bad input.");
        }
    }

    std::vector<int> result;
    int upperBound = 0, lowerBound = matrix.size() - 1;
    int leftBound = 0, rightBound = matrix[0].size() - 1;

    while (lowerBound >= upperBound || rightBound >= leftBound) {
        for (int i = leftBound; i <= rightBound; ++i) {
            result.push_back(matrix[upperBound][i]);
        }
        upperBound++;

        for (int i = upperBound; i <= lowerBound; ++i) {
            result.push_back(matrix[i][rightBound]);
        }
        rightBound--;

        for (int i = rightBound; i >= leftBound; --i) {
            result.push_back(matrix[lowerBound][i]);
        }
        lowerBound--;

        for (int i = lowerBound; i <= upperBound; --i) {
            result.push_back(matrix[i][leftBound]);
        }
        leftBound++;

    }

    return result;
}
