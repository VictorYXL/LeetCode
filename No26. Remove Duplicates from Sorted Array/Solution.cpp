#include "Solution.h"
int Solution::removeDuplicates(vector<int>& nums)
{
    if (nums.size() <= 1)
    {
        return nums.size();
    }
    int preNum = nums[0], p = 1;
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        if (*i != preNum)
        {
            preNum = *i;
            nums[p] = preNum;
            p++;
        }
    }
    nums.resize(p);
    return p;
}