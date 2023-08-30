#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::vector<int> nums = {0,1,2,4,5,7};
    std::vector<std::string> expected = {"0->2","4->5","7"};
    auto result = sol.summaryRanges(nums);
    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

TEST(Test, Example2) {
    Solution sol;
    std::vector<int> nums = {0,2,3,4,6,8,9};
    std::vector<std::string> expected = {"0","2->4","6","8->9"};
    auto result = sol.summaryRanges(nums);
    ASSERT_EQ(expected.size(), result.size());
    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}