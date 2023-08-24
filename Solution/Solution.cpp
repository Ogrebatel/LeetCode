#include "Solution.h"

int Solution::maxProfit(std::vector<int>& prices) {
    if(prices.empty()) {
        return 0;
    }

    int priceToBuy = prices[0];
    int priceToSell = prices[0];
    int currentDelta = 0;
    int totalDelta = 0;

    for (int i = 0; i < prices.size(); ++i) {
        if(priceToSell < prices[i]) {
            priceToSell = prices[i];
            currentDelta = priceToSell - priceToBuy;
        }

        if(priceToSell > prices[i]) {
            totalDelta += currentDelta;
            priceToBuy = prices[i];
            priceToSell = prices[i];
            currentDelta = 0;
        }
    }

    totalDelta += currentDelta;
    return totalDelta;
}
