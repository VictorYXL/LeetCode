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
    ListNode static * swapPairs(ListNode* head)
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
};
void Test()
{
    Solution solution;
    ListNode a(1);
    ListNode b(3);
    ListNode c(5);
    ListNode d(7);
    ListNode e(2);
    ListNode f(4);
    ListNode g(0);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = &g;
    g.next = NULL;
    ListNode *result = Solution::swapPairs(&a);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;

    }
    return;
}