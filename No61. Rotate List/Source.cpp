#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    ListNode *head, *s, * r;
    //int num[] = { 1 , 2, 3, 4, 5 }, num_count = 5;
    int num[] = { 1 }, num_count = 1;
    head = new ListNode(0);
    s = head;
    for (int i = 0; i < num_count; i++)
    {
        r = new ListNode(num[i]);
        s->next = r;
        s = r;
    }
    head = Solution::rotateRight(head->next, 2);
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
	
	return 0;
}