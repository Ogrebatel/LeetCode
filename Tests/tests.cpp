#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {2,3,1,1,4};
    EXPECT_EQ(2, sol.jump(nums));
}
TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {2,3,0,1,4};
    EXPECT_EQ(2, sol.jump(nums));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}