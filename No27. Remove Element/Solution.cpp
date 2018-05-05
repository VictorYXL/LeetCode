#include "Solution.h"
int Solution::removeElement(vector<int>& nums, int val)
{
    int p = 0;
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        if (*i != val)
        {
            nums[p] = *i;
            p++;
        }
    }
    nums.resize(p);
    return p;
}