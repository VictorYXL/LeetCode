#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static int maxSubArray(vector<int>& nums)
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
};
int main()
{
    Solution solution;
    int numArray[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    vector<int> nums(numArray, numArray + 8);
    cout << Solution::maxSubArray(nums) << endl;
    return;
}