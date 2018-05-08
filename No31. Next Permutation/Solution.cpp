#include <vector>
#include "Solution.h"
using namespace std;

void Solution::nextPermutation(vector<int>& nums)
{
    int t;
    if (nums.size() <= 1)
    {
        return;
    }
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            for (int j = nums.size() - 1; j >= 0; j--)
            {
                if (nums[i] < nums[j])
                {
                    t = nums[i];
                    nums[i] = nums[j];
                    nums[j] = t;
                    for (int p = i + 1; p < (nums.size() + i + 1) / 2; p++)
                    {
                        t = nums[p];
                        nums[p] = nums[nums.size() + i - p];
                        nums[nums.size() + i - p] = t;
                    }
                    return;
                }
            }
            
        }
    }
    for (int i = 0; i < nums.size() / 2; i++)
    {
        t = nums[i];
        nums[i] = nums[nums.size() - i - 1];
        nums[nums.size() - i - 1] = t;
    }
    return;
}
