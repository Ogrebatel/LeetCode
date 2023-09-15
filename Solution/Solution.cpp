#include "Solution.h"

std::string Solution::addBinary(std::string a, std::string b) {
    auto rIterA = a.rbegin();
    auto rIterB = b.rbegin();

    char overflow = 0;

    std::string result;

    while (rIterA != a.rend() && rIterB != b.rend()) {
        result.push_back(((*rIterA) - 0x30 + (*rIterB) - 0x30 + overflow) % 2 + 0x30);
        overflow = ((*rIterA) - 0x30 + (*rIterB) - 0x30 + overflow) / 2;
        rIterA = std::next(rIterA);
        rIterB = std::next(rIterB);
    }

    while (rIterA != a.rend()) {
        result.push_back(((*rIterA) - 0x30 + overflow) % 2 + 0x30);
        overflow = ((*rIterA) - 0x30 + overflow) / 2;
        rIterA = std::next(rIterA);
    }

    while (rIterB != b.rend()) {
        result.push_back(((*rIterB) - 0x30 + overflow) % 2 + 0x30);
        overflow = ((*rIterB) - 0x30 + overflow) / 2;
        rIterB = std::next(rIterB);
    }

    if (overflow) {
        result += std::to_string(overflow);
    }

    std::reverse(result.begin(), result.end());

    return result;
}
