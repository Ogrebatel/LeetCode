#include <gtest/gtest.h>
#include "Solution.h"

TEST(Test, example1) {
    Solution sol;
    int m = 3;
    int n = 3;

    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> nums2 = {2, 5, 6};
    std::vector<int> result = {1, 2, 2, 3, 5, 6};

    sol.merge(nums1, m, nums2, n);

    for (auto i = 0; i < result.size(); ++i) {
        EXPECT_EQ(nums1[i], result[i]);
    }
}

TEST(Test, example2) {
    Solution sol;
    int m = 1;
    int n = 0;

    std::vector<int> nums1 = {1};
    std::vector<int> nums2 = {};
    std::vector<int> result = {1};

    sol.merge(nums1, m, nums2, n);

    for (auto i = 0; i < result.size(); ++i) {
        EXPECT_EQ(nums1[i], result[i]);
    }
}

TEST(Test, example3) {
    Solution sol;
    int m = 0;
    int n = 1;

    std::vector<int> nums1 = {0};
    std::vector<int> nums2 = {1};
    std::vector<int> result = {1};

    sol.merge(nums1, m, nums2, n);

    for (auto i = 0; i < result.size(); ++i) {
        EXPECT_EQ(nums1[i], result[i]);
    }
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}