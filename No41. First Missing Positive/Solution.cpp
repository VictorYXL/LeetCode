#include <algorithm>
#include <set>
#include "Solution.h"
using namespace std;

int Solution::firstMissingPositive(vector<int>& nums)
{
    int n = nums.size(), i = 0, t;
    while (i < n)
    {
        if (nums[i] > 0 && nums[i] < n && nums[nums[i] - 1] != nums[i])
        {
            t = nums[i];
            nums[i] = nums[nums[i] - 1];
            nums[t - 1] = t;
        }
        else 
        {
            i++;
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
        {
            return i + 1;
        }
    }
    return n + 1;
}
