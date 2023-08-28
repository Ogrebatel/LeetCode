#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example7) {
    Solution sol;
    std::vector<int> ratings = {1,2,3,5,4,3,2,1,4,3,2,1,3,2,1,1,2,3,4};
    EXPECT_EQ(47, sol.candy(ratings));
}

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> ratings = {1,0,2};
    EXPECT_EQ(5, sol.candy(ratings));
}

TEST(Test, Example5) {
    Solution sol;
    std::vector<int> ratings = {1,2,3};
    EXPECT_EQ(6, sol.candy(ratings));
}

TEST(Test, Example4) {
    Solution sol;
    std::vector<int> ratings = {3,2,1};
    EXPECT_EQ(6, sol.candy(ratings));
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> ratings = {1,2,2};
    EXPECT_EQ(4, sol.candy(ratings));
}

TEST(Test, Example3) {
    Solution sol;
    std::vector<int> ratings = {1,3,2,2,1};
    EXPECT_EQ(7, sol.candy(ratings));
}







int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}