#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example3) {
    Solution sol;
    std::vector<std::string> words = {"Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"};
    std::vector<std::string> expected = {"Science  is  what we",
                                         "understand      well",
                                         "enough to explain to",
                                         "a  computer.  Art is",
                                         "everything  else  we",
                                         "do                  "};

    std::vector<std::string> result = sol.fullJustify(words, 20);

    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

TEST(Test, Example1) {
    Solution sol;
    std::vector<std::string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    std::vector<std::string> expected = {"This    is    an",
                                         "example  of text",
                                         "justification.  "};

    std::vector<std::string> result = sol.fullJustify(words, 16);

    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}


TEST(Test, Example2) {
    Solution sol;
    std::vector<std::string> words = {"What","must","be","acknowledgment","shall","be"};
    std::vector<std::string> expected = {"What   must   be",
                                         "acknowledgment  ",
                                         "shall be        "};

    std::vector<std::string> result = sol.fullJustify(words, 16);

    for (int i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}