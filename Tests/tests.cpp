#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string s = "PAYPALISHIRING";
    EXPECT_EQ("PAHNAPLSIIGYIR", sol.convert(s, 3));
}

TEST(Test, Example2) {
    Solution sol;
    std::string s = "PAYPALISHIRING";
    EXPECT_EQ("PINALSIGYAHRPI", sol.convert(s, 4));
}

TEST(Test, Example3) {
    Solution sol;
    std::string s = "A";
    EXPECT_EQ("A", sol.convert(s, 1));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}