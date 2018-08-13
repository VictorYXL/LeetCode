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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if (head == NULL)
        {
            return head;
        }
        int length = 1;
        ListNode *p = head, *q = head, *r;
        while (p->next != NULL)
        {
            p = p->next;
            length++;
        }
        for (int i = 0; i < length - k % length - 1; i++)
        {
            q = q->next;
        }
        r = q->next;
        p->next = head;
        q->next = NULL;
        if (r == NULL)
        {
            return head;
        }
        return r;
    }
};
void Test()
{
    Solution solution;
    ListNode *head, *s, *r;
    int num[] = { 1 }, num_count = 1;
    head = new ListNode(0);
    s = head;
    for (int i = 0; i < num_count; i++)
    {
        r = new ListNode(num[i]);
        s->next = r;
        s = r;
    }
    head = solution.rotateRight(head->next, 2);
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }

    return;
}