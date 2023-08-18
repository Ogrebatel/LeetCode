#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, test_for_test) {
    Solution sol;

    EXPECT_EQ(4, sol.solution(2, 2));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}