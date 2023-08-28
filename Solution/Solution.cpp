#include "Solution.h"

int Solution::candy(std::vector<int> &ratings) {
    if (ratings.size() == 1) {
        return 1;
    }
    int totalCandies = 0;
    int currentCost = 1;
    for (int i = 0; i < ratings.size() - 1; ++i) {
        if (ratings[i] > ratings[i + 1]) {
            int j = i;
            int rightCost = 1;
            while (j < ratings.size() - 1 && ratings[j] > ratings[j + 1]) {
                ++rightCost;
                ++j;
            }

            if (rightCost > currentCost) {
                totalCandies += rightCost;
            } else {
                totalCandies += currentCost;
            }
            --rightCost;
            for (; rightCost > 0; --rightCost) {
                totalCandies += rightCost;
            }

            i = j;
            currentCost = 2;

            if (j < ratings.size() - 1 && ratings[i] == ratings[i + 1]) {
                currentCost = 1;
            }
        } else if (ratings[i] < ratings[i + 1]){
            totalCandies += currentCost;
            ++currentCost;
        } else {
            totalCandies += currentCost;
            currentCost = 1;
        }
    }
    if (ratings.size() > 1 && ratings[ratings.size() - 2] < ratings[ratings.size() - 1]) {
        totalCandies += currentCost;
    } else if (ratings.size() > 1 && ratings[ratings.size() - 2] == ratings[ratings.size() - 1]) {
        ++totalCandies;
    }
    return totalCandies;
}
