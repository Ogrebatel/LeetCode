#include "Solution.h"

void Solution::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    int i = m + n - 1;
    for (; m > 0 && n > 0; --i) {
        if (nums1[m - 1] < nums2[n - 1]) {
            nums1[i] = nums2[n - 1];
            n--;
        } else {
            nums1[i] = nums1[m - 1];
            m--;
        }
    }

    for (; n > 0; --i) {
        nums1[i] = nums2[n - 1];
        n--;
    }
}

