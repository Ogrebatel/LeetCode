#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;
    std::string str = "Hello World";
    EXPECT_EQ(5, sol.lengthOfLastWord(str));
}

TEST(Test, Example2) {
    Solution sol;
    std::string str = "   fly me   to   the moon  ";
    EXPECT_EQ(4, sol.lengthOfLastWord(str));
}

TEST(Test, Example3) {
    Solution sol;
    std::string str = "luffy is still joyboy";
    EXPECT_EQ(6, sol.lengthOfLastWord(str));
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}