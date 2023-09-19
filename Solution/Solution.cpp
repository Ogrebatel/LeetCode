#include "Solution.h"

int Solution::getElement (std::vector<std::vector<int>> &matrix, int forwardIdx) {
    return matrix[forwardIdx / matrix[0].size()][forwardIdx % matrix[0].size()];
}

bool Solution::searchMatrix(std::vector<std::vector<int>> &matrix, int target) {
    int left = 0, right = matrix.size() * matrix[0].size() - 1;

    while (true) {
        if (left == right) {
            if (getElement(matrix, left) == target) {
                return true;
            } else {
                return false;
            }
        }

        int centerIdx = left + (right - left) / 2;

        if (target < getElement(matrix, centerIdx)) {
            right = centerIdx;
            continue;
        }

        if (target > getElement(matrix, centerIdx)) {
            left = left + 1;
            continue;
        }
        return true;
    }
}
