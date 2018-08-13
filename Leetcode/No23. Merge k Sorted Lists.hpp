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
    ListNode * mergeKLists(vector<ListNode*>& lists)
    {
        ListNode *newList = new ListNode(0), *head = newList;
        newList->next = NULL;
        int minIndex;
        for (int i = 0; i < lists.size(); i++)
        {
            if (lists[i] == NULL)
            {
                lists.erase(lists.begin() + i);
                i--;
                continue;
            }
        }
        while (lists.size() != 0)
        {
            minIndex = 0;
            for (int i = 0; i < lists.size(); i++)
            {
                if (lists[i]->val < lists[minIndex]->val)
                {
                    minIndex = i;
                }
            }
            newList->next = lists[minIndex];
            newList = newList->next;
            lists[minIndex] = lists[minIndex]->next;
            if (lists[minIndex] == NULL)
            {
                lists.erase(lists.begin() + minIndex);
            }
        }

        return head->next;
    }
};
void Test()
{
    Solution solution;
    ListNode a(1);
    ListNode b(3);
    ListNode c(5);
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    ListNode a1(2);
    ListNode b1(6);
    ListNode c1(12);
    a1.next = &b1;
    b1.next = &c1;
    c1.next = NULL;
    ListNode a2(0);
    ListNode b2(4);
    ListNode c2(20);
    a2.next = &b2;
    b2.next = &c2;
    c2.next = NULL;
    vector<ListNode *> vl;
    vl.push_back(NULL);
    ListNode *result = solution.mergeKLists(vl);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;

    }
    return;
}