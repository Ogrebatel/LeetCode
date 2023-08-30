#include "Solution.h"

bool Solution::isHappy(int n) {
    std::set<int> values;
    while (true) {
        if (!values.insert(n).second) {
            return false;
        }
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }

        if (sum == 1) {
            return true;
        }
        n = sum;
    }
}
