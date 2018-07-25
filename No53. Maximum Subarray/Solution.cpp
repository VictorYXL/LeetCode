#include "Solution.h"
using namespace std;
int Solution::maxSubArray(vector<int>& nums)
{
    int curSum = 0, maxSum = nums[0];
    for (auto& num : nums)
    {
        maxSum = num > maxSum ? num : maxSum;
    }
    if (maxSum < 0)
    {
        return maxSum;
    }
    for (auto& num : nums)
    {
        curSum = (curSum + num) > 0 ? (curSum + num) : 0;
        maxSum = curSum > maxSum ? curSum : maxSum;
    }
    return maxSum;
}
