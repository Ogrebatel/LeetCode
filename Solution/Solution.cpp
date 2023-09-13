#include "Solution.h"

ListNode *Solution::rotateRight(ListNode *head, int k) {
    ListNode* iter = head;
    int size = 0;
    while (iter) {
        size = size + 1;
        iter = iter->next;
    }

    if (size == 0 || size == 1) {
        return head;
    }

    k %= size;
    if (k == 0) {
        return head;
    }

    iter = head;
    for (int i = 0; i < size - k - 1; ++i) {
        iter = iter->next;
    }

    ListNode* newHead = iter->next;
    iter->next = nullptr;

    iter = newHead;

    while(iter->next) {
        iter = iter->next;
    }

    iter->next = head;

    return newHead;
}
