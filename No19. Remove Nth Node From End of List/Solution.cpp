#include <algorithm>
#include <map>
#include "Solution.h"
ListNode* Solution::removeNthFromEnd(ListNode* head, int n)
{
	ListNode *newList = head;
	ListNode *fast = head, *slow = head;
	for (int i = 0; i < n; i++)
	{
		if (fast == NULL)
			return NULL;
		fast = fast->next;
	}
	if (fast == NULL)
		return head->next;
	while (fast->next != NULL)
	{
		fast = fast->next;
		slow = slow->next;
	}
	slow->next = slow->next->next;
	return newList;
}