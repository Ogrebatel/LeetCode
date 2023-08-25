#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, test_for_test) {
    Solution sol;
    std::vector<int> nums = {-1,0,1,2,-1,-4};
    for (const auto& triplet: sol.threeSum(nums)) {
        for (auto it: triplet) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}