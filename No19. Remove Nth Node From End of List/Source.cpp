#include <iostream>
#include "Solution.h"
int main()
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
	return 0;
}