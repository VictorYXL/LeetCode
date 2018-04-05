#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
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
	return 0;
}