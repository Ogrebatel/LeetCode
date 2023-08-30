#include "Solution.h"

std::vector<std::vector<int>> Solution::merge(std::vector<std::vector<int>> &intervals) {
    if (intervals.empty()) {
        return {};
    }

    std::sort(intervals.begin(), intervals.end(), [](const std::vector<int> &a, const std::vector<int> &b) -> bool {
        return a[0] < b[0];
    });

    std::vector<std::vector<int>> result;
    result.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); ++i) {
        if (intervals[i][0] > result[result.size() - 1][1]) {
            result.push_back(intervals[i]);
        } else if (intervals[i][1] <= result[result.size() - 1][1]) {
            continue;
        } else {
            result[result.size() - 1][1] = intervals[i][1];
        }
    }

    return result;
}
