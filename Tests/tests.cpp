#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    std::string a = "1010", b = "1011";
    std::string expected = "10101";

    EXPECT_EQ(expected, sol.addBinary(a, b));
}
TEST(Test, Example2) {
    Solution sol;

    std::string a = "11", b = "1";
    std::string expected = "100";

    EXPECT_EQ(expected, sol.addBinary(a, b));
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}