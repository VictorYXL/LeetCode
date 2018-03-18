#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
	//342 + 665
	ListNode *l11 = new ListNode(1);
	ListNode *l12 = new ListNode(8);
	ListNode *l13 = new ListNode(3);
	ListNode *l14 = new ListNode(9);
	ListNode *l15 = new ListNode(9);
	//l11->next = l12;
	//l12->next = l13;
	//l13->next = l14;
	//l14->next = l15;
	ListNode *l21 = new ListNode(9);
	ListNode *l22 = new ListNode(9);
	//ListNode *l23 = new ListNode(6);
	l21->next = l22;
	//l22->next = l23;

	Solution *solution = new Solution();
	ListNode *result;
	result = solution->addTwoNumbers(l11, l21);
	while (result != NULL)
	{
		cout << result->val << " ";
		result = result->next;
	};
}