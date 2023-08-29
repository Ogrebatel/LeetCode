#include "Solution.h"

bool Solution::isValidSudoku(std::vector <std::vector<char>> &board) {
    for (const auto &row: board) {
        dropChecker();
        for (const auto &col: row) {
            if (col == '.') {
                continue;
            }
            if (_check[col] == true) {
                return false;
            }
            _check[col] = true;
        }
    }

    for (int j = 0; j < 9; ++j) {
        dropChecker();
        for (int i = 0; i < 9; ++i) {
            if (board[i][j] == '.') {
                continue;
            }
            if (_check[board[i][j]] == true) {
                return false;
            }
            _check[board[i][j]] = true;
        }
    }

    for (int k = 0; k < 9; ++k) {
        dropChecker();
        for (int i = k / 3 * 3; i < k / 3 * 3 + 3; ++i) {
            for (int j = k % 3 * 3; j < k % 3 * 3 + 3; ++j) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (_check[board[i][j]] == true) {
                    return false;
                }
                _check[board[i][j]] = true;
            }
        }
    }

    return true;
}

void Solution::dropChecker() {
    _check['1'] = false;
    _check['2'] = false;
    _check['3'] = false;
    _check['4'] = false;
    _check['5'] = false;
    _check['6'] = false;
    _check['7'] = false;
    _check['8'] = false;
    _check['9'] = false;
}
