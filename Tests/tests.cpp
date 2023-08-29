#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, Example1) {
    Solution sol;

    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> expected = {{"bat"},
                                                      {"nat", "tan"},
                                                      {"ate", "eat", "tea"}};
    std::vector<std::vector<std::string>> result = sol.groupAnagrams(strs);

    for (const auto &it: result) {
        std::cout << "{";
        for (const auto &jt: it) {
            std::cout << jt << " ";
        }
        std::cout << "}";
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}