#pragma once
struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
class Solution 
{
public:
	ListNode static * removeNthFromEnd(ListNode* head, int n);

};