#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
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
	ListNode *newList = Solution::mergeTwoLists(NULL, d);
	while (newList != NULL)
	{
		std::cout << newList->val << " ";
		newList = newList->next;
	}
	return 0;
}