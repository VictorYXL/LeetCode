#pragma once
#include <iostream>
#include <string>
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
    ListNode * mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode * l3 = new ListNode(0), *h = l3;

        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val > l2->val)
            {
                l3->next = l2;
                l3 = l2;
                l2 = l2->next;
            }
            else
            {
                l3->next = l1;
                l3 = l1;
                l1 = l1->next;
            }
        }
        if (l1 != NULL)
        {
            l3->next = l1;
        }
        else
        {
            l3->next = l2;
        }
        return h->next;
    }
};
void Test()
{
    Solution solution;
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(7);
    ListNode *c = new ListNode(10);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(8);
    a->next = NULL;
    b->next = c;
    c->next = NULL;
    d->next = e;
    e->next = NULL;
    ListNode *newList = solution.mergeTwoLists(NULL, d);
    while (newList != NULL)
    {
        std::cout << newList->val << " ";
        newList = newList->next;
    }
    return;