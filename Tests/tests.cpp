#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example_1) {
    Solution sol;

    std::vector<int> gas = {1,2,3,4,5};
    std::vector<int> cost = {3,4,5,1,2};
    EXPECT_EQ(3, sol.canCompleteCircuit(gas, cost));
}

TEST(Test, Example_2) {
    Solution sol;

    std::vector<int> gas = {2,3,4};
    std::vector<int> cost = {3,4,3};
    EXPECT_EQ(-1, sol.canCompleteCircuit(gas, cost));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}