#include "Solution.h"

int Solution::longestConsecutive(std::vector<int> &nums) {
    std::unordered_set<int> set;

    for (const auto &iter: nums) {
        set.insert(iter);
    }
    
    int longest = 0;
    int current = 0;

    for (int i = 0; i < set.size(); ++i) {
        
    }
    
    return 0;
}
