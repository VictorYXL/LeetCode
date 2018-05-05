#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
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
    ListNode *result = Solution::reverseKGroup(NULL, 1);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
	cout << endl;
	return 0;
}