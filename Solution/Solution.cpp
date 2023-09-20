#include "Solution.h"

int Solution::climbStairs(int n) {
    if (n <= 1) {
        return 1;
    }

    std::vector<int> resultArr(n + 1);
    resultArr[0] = 1;
    resultArr[1] = 1;
    for (int i = 2; i < n + 1; ++i) {
        resultArr[i] = resultArr[i - 1] + resultArr[i - 2];
    }

    return resultArr[n];
}
