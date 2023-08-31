#include "Solution.h"

ListNode *Solution::mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode* result = new ListNode();
    ListNode* iter = result;
    while (list1 != nullptr && list2 != nullptr) {
        if (list1 < list2) {
            result->val = list1->val;
            list1 = list1->next;
        } else {
            result->val = list2->val;
            list2 = list2->next;
        }
        iter->next = new ListNode();
    }

    while (list1) {
        result->val = list1->val;
        list1 = list1->next;
    }

    while (list2) {
        result->val = list2->val;
        list2 = list2->next;
    }

    return result;
}
