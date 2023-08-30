#include "Solution.h"

std::vector<std::vector<int>>
Solution::insert(std::vector<std::vector<int>> &intervals, std::vector<int> &newInterval) {
    if (newInterval.empty()) {
        return intervals;
    }

    std::vector<std::vector<int>> result;
    if (intervals.empty()) {
        result.push_back(newInterval);
        return result;
    }

    int prevI = 0;

    for (int i = 0; i < intervals.size(); ++i) {

    }
    return {};
}
