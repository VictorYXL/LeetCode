#pragma once
#include <vector>
using namespace std;
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    
};
class Solution 
{
public:
    ListNode static * swapPairs(ListNode* head);
};