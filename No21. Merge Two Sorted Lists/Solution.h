#pragma once
#include <string>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
class Solution {
public:
	ListNode static * mergeTwoLists(ListNode* l1, ListNode* l2);
};