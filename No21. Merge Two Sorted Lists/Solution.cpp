#include "Solution.h"

ListNode * Solution::mergeTwoLists(ListNode * l1, ListNode * l2)
{
	ListNode * l3 = new ListNode(0), *h = l3;

	while (l1 != NULL && l2 != NULL)
	{
		if (l1->val > l2->val)
		{
			l3->next = l2;
			l3 = l2;
			l2 = l2->next;
		}
		else
		{
			l3->next = l1;
			l3 = l1;
			l1 = l1->next;
		}
	}
	if (l1 != NULL)
	{
		l3->next = l1;
	}
	else
	{
		l3->next = l2;
	}
	return h->next;
}
