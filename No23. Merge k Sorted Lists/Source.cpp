#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
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
    //vl.push_back(&a);
    //vl.push_back(&a1);
    //vl.push_back(&a2);
    ListNode *result = Solution::mergeKLists(vl);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;

    }
	return 0;
}