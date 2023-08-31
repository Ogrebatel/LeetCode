#include "Solution.h"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {

    int overload = 0;
    ListNode *result = new ListNode();
    ListNode *iter = result;
    while (l1 != nullptr || l2 != nullptr) {
        if (l1 != nullptr) {
            iter->val += l1->val;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            iter->val += l2->val;
            l2 = l2->next;
        }

        iter->val += overload;
        if (iter->val > 9) {
            iter->val %= 10;
            overload = 1;
        } else {
            overload = 0;
        }

        iter->next = new ListNode();
        iter = iter->next;
    }

    if (overload) {
        iter->val = overload;
        iter->next = new ListNode();
    }

    iter = result;
    while (iter->next && iter->next->next) {
        iter = iter->next;
    }

    delete iter->next;
    iter->next = nullptr;
    return result;
}
