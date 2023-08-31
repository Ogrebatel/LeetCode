#include "Solution.h"

ListNode *Solution::mergeTwoLists(ListNode *list1, ListNode *list2) {

    if(!list1 && !list2) {
        return nullptr;
    }

    ListNode* result = new ListNode();
    ListNode* iter = result;
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            iter->val = list1->val;
            list1 = list1->next;
        } else {
            iter->val = list2->val;
            list2 = list2->next;
        }
        iter->next = new ListNode();
        iter = iter->next;
    }

    while (list1) {
        iter->val = list1->val;
        list1 = list1->next;
        iter->next = new ListNode();
        iter = iter->next;
    }

    while (list2) {
        iter->val = list2->val;
        list2 = list2->next;
        iter->next = new ListNode();
        iter = iter->next;
    }

    iter = result;
    while (iter->next && iter->next->next) {
        iter = iter->next;
    }

    delete iter->next;
    iter->next = nullptr;

    return result;
}
