#include "Solution.h"

ListNode *Solution::partition(ListNode *head, int x) {
    ListNode* prevNodes = nullptr;
    ListNode* postNodes = nullptr;

    ListNode* inputIter = head;
    ListNode* prevNodesIter = nullptr;
    ListNode* postNodesIter = nullptr;

    while (inputIter) {
        if (inputIter->val < x) {
            if (!prevNodes) {
                prevNodes = inputIter;
                prevNodesIter = prevNodes;
            } else {
                prevNodesIter->next = inputIter;
                prevNodesIter = prevNodesIter->next;
            }
        } else {
            if (!postNodes) {
                postNodes = inputIter;
                postNodesIter = postNodes;
            } else {
                postNodesIter->next = inputIter;
                postNodesIter = postNodesIter->next;
            }
        }
        inputIter = inputIter->next;
    }

    if (postNodesIter) {
        postNodesIter->next = nullptr;
    }
    if (prevNodesIter) {
        prevNodesIter->next = postNodes;
        return prevNodes;
    }

    return head;
}
