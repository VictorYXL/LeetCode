#include "Solution.h"
ListNode* Solution::reverseKGroup(ListNode* head, int k)
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
