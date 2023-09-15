#include "Solution.h"

int Solution::hammingWeight(uint32_t n) {
//    std::bitset<sizeof n * 8> bs(n);
//    return bs.count();
    int result = 0;
    for (int i = 0; i < sizeof n * 8; ++i) {
        if (n >> i & 1) {
            ++result;
        }
    }
    return result;
}
