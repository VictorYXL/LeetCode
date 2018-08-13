#pragma once
#include <vector>
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
    ListNode * addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode *l3, *r, *p;
        int s, a = 0;
        l3 = new ListNode(0);
        l3->next = NULL;
        r = l3;

        while (l1 != NULL && l2 != NULL)
        {
            s = l1->val + l2->val + a;
            a = s / 10;
            s %= 10;
            p = new ListNode(s);
            r->next = p;
            r = p;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1 == NULL && l2 == NULL)
        {
            if (a == 1)
            {
                p = new ListNode(1);
                p->next = NULL;
                r->next = p;
            }
        }
        else
        {
            if (l1 == NULL)
            {
                l1 = l2;
            }
            l2 = l1;
            if (a == 1)
            {
                while (l1->val == 9 && l1->next != NULL)
                {
                    l1->val = 0;
                    l1 = l1->next;
                }
                if (l1->val != 9)
                {
                    l1->val += 1;
                }
                else
                {
                    l1->val = 0;
                    p = new ListNode(1);
                    p->next = NULL;
                    l1->next = p;
                }
            }
            r->next = l2;
        }
        return l3->next;
    }
};
void Test()
{
    Solution solution;
    //342 + 665
    ListNode *l11 = new ListNode(1);
    ListNode *l12 = new ListNode(8);
    ListNode *l13 = new ListNode(3);
    ListNode *l14 = new ListNode(9);
    ListNode *l15 = new ListNode(9);

    ListNode *l21 = new ListNode(9);
    ListNode *l22 = new ListNode(9);
    l21->next = l22;

    ListNode *result;
    result = solution.addTwoNumbers(l11, l21);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    };
    return;
}