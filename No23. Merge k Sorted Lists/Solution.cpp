#include "Solution.h"
ListNode * Solution::mergeKLists(vector<ListNode*>& lists)
{
    ListNode *newList = new ListNode(0), *head = newList;
    newList->next = NULL;
    int minIndex;
    for (int i = 0; i < lists.size(); i++)
    {
        if (lists[i] == NULL)
        {
            lists.erase(lists.begin() + i);
            i--;
            continue;
        }
    }
    while (lists.size() != 0)
    {
        minIndex = 0;
        for (int i = 0; i < lists.size(); i++)
        {
            if (lists[i]->val < lists[minIndex]->val)
            {
                minIndex = i;
            }
        }
        newList->next = lists[minIndex];
        newList = newList->next;
        lists[minIndex] = lists[minIndex]->next;
        if (lists[minIndex] == NULL)
        {
            lists.erase(lists.begin() + minIndex);
        }
    }

    return head->next;
}
