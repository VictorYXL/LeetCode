#pragma once
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

};
class Solution
{
public:
    ListNode static * removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *newList = head;
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++)
        {
            if (fast == NULL)
                return NULL;
            fast = fast->next;
        }
        if (fast == NULL)
            return head->next;
        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return newList;
    }

};
void Test()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    a->next = b;
    b->next = NULL;
    c->next = d;
    d->next = e;
    e->next = NULL;
    ListNode *newList = Solution::removeNthFromEnd(a, 2);
    while (newList != NULL)
    {
        std::cout << newList->val << " ";
        newList = newList->next;
    }
    return;
}