#include "Solution.h"

int Solution::rangeBitwiseAnd(int left, int right) {
    if((int)log2(left)!=(int)log2(right)) return 0;
    for (long long i = left; i <= right; ++i) {
        left &= i;
        if (!left) {
            return 0;
        }
    }
    return left;
}
