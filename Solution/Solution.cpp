#include "Solution.h"

std::vector<std::vector<int>>
Solution::insert(std::vector<std::vector<int>> &intervals, std::vector<int> &newInterval) {
    std::vector<std::vector<int>> result;

    if (intervals.empty()) {
        result.push_back(newInterval);
        return result;
    }

    if (newInterval[1] < intervals[0][0]) {
        result.push_back(newInterval);
        for (auto &iter: intervals) {
            result.push_back(iter);
        }
        return result;
    }

    int i;
    bool inserted = false;
    bool ended = false;
    for (i = 0; i < intervals.size(); ++i) {
        if (newInterval[0] > intervals[i][1]) {
            result.push_back(intervals[i]);
            continue;
        } else {
            result.push_back(newInterval[0] >= intervals[i][0] ? intervals[i] : newInterval);
            inserted = true;
            break;
        }
    }

    for (; i < intervals.size(); ++i) {
        if (intervals[i][1] < newInterval[1]) {
            continue;
        }
        if (intervals[i][0] > newInterval[1]) {
            result[result.size() - 1][1] = newInterval[1];
            result.push_back(intervals[i]);
        } else {
            result[result.size() - 1][1] = intervals[i][1];
        }
        ++i;
        ended = true;
        break;

    }

    for (; i < intervals.size(); ++i) {
        result.push_back(intervals[i]);
    }

    if (!inserted) {
        result.push_back(newInterval);
        ended = true;
    }

    if (!ended) {
        result[result.size() - 1][1] = newInterval[1];
    }
    return result;
}
