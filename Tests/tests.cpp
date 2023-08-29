#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    std::vector<int> input = {1,2,3,1};
    int k = 3;

    EXPECT_TRUE(sol.containsNearbyDuplicate(input, k));
}

TEST(Test, Example2) {
    Solution sol;

    std::vector<int> input = {1,0,1,1};
    int k = 1;

    EXPECT_TRUE(sol.containsNearbyDuplicate(input, k));
}

TEST(Test, Example3) {
    Solution sol;

    std::vector<int> input = {1,2,3,1,2,3};
    int k = 2;

    EXPECT_FALSE(sol.containsNearbyDuplicate(input, k));
}



int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}