#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> prices = {7,1,5,3,6,4};
    sol.maxProfit(prices);

    EXPECT_EQ(5, sol.maxProfit(prices));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> prices = {7,6,4,3,1};
    sol.maxProfit(prices);

    EXPECT_EQ(0, sol.maxProfit(prices));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}