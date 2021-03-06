#pragma once
#include <iostream>
#include <vector>
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
    ListNode * reverseKGroup(ListNode* head, int k)
    {

        ListNode *preNode = new ListNode(0), *list, *r, *p;
        int length = 0;
        preNode->next = head;
        list = preNode;
        r = head;
        while (r != NULL)
        {
            length++;
            r = r->next;
        }
        if (length <= 1)
        {
            return head;
        }
        r = head;
        p = head->next;
        for (int i = 0; i < length / k; i++)
        {
            for (int j = 0; j < k - 1; j++)
            {
                r->next = p->next;
                p->next = preNode->next;
                preNode->next = p;
                p = r->next;
            }
            preNode = r;
            r = r->next;
            if (r != NULL)
            {
                p = r->next;
            }
            else
            {
                break;
            }
        }
        return list->next;
    }
};
void Test()
{
    Solution solution;
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(4);
    ListNode e(5);
    ListNode f(6);
    ListNode g(7);
    ListNode h(8);
    ListNode i(9);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = &g;
    g.next = &h;
    h.next = &i;
    i.next = NULL;
    ListNode *result = solution.reverseKGroup(NULL, 1);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    return;
}