#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    uint32_t n = 43261596;
    EXPECT_EQ(964176192 , sol.reverseBits(n));
}

TEST(Test, Example2) {
    Solution sol;
    uint32_t n = 4294967293;
    EXPECT_EQ(3221225471, sol.reverseBits(n));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}