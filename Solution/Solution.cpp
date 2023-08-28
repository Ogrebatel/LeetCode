#include "Solution.h"

int Solution::canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost) {
    for (int i = 0; i < gas.size(); ++i) {
        if (gas[i] >= cost[i]) {
            int tank = 0;
            int j = i;
            for (; j < gas.size() + i; ++j) {
                tank = tank + gas[j % gas.size()] - cost[j % gas.size()];
                if (tank < 0) {
                    break;
                }
            }
            if (tank < 0) {
                i = j;
                continue;
            }
            return i;
        }
    }
    return -1;
}
