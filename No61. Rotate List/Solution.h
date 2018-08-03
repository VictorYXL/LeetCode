#pragma once
#include <string>
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
    static ListNode* rotateRight(ListNode* head, int k);
};