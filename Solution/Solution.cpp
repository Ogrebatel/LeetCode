#include "Solution.h"

ListNode *Solution::reverseBetween(ListNode *head, int left, int right) {
    ListNode* iter = head;
    ListNode* jter;

    --left;
    --right;
    int delta = right - left;
    while (left) {
        iter = iter->next;
        --left;
    }

    while (delta > 0) {
        jter = iter;
        int tmpDelta = delta;
        while (tmpDelta) {
            jter = jter->next;
            --tmpDelta;
        }
        std::swap(iter->val, jter->val);
        delta -= 2;
        iter = iter->next;
    }
    return head;
}
