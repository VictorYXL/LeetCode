#include "Solution.h"
ListNode* Solution::swapPairs(ListNode* head)
{
    ListNode *preNode = new ListNode(0), *middleNode, *list;
    preNode->next = head;
    list = preNode;
    while (head != NULL && head->next != NULL)
    {
        middleNode = head->next;
        head->next = middleNode->next;
        middleNode->next = head;
        preNode->next = middleNode;
        preNode = head;
        head = head->next;
    }
    return list->next;
}
