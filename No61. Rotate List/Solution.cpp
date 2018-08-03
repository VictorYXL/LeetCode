#include <string>
#include "Solution.h"

ListNode * Solution::rotateRight(ListNode * head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    int length = 1;
    ListNode *p = head, *q = head, *r;
    while (p->next != NULL)
    {
        p = p->next;
        length++;
    }
    for (int i = 0; i < length - k % length - 1; i++)
    {
        q = q->next;
    }
    r = q->next;
    p->next = head;
    q->next = NULL;
    if (r == NULL)
    {
        return head;
    }
    return r;
}
