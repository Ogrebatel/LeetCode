#include "Solution.h"

ListNode *Solution::removeNthFromEnd(ListNode *head, int n) {
    ListNode* iter = head;
    std::vector<ListNode*> addresses;

    while (iter != nullptr) {
        addresses.push_back(iter);
        iter = iter->next;
    }

    if (n == addresses.size()) {
        iter = head->next;
        delete head;
        return iter;
    }

    int curPos = addresses.size() - n;

    addresses[curPos - 1]->next = addresses[curPos]->next;

    delete iter;
    return head;
}
