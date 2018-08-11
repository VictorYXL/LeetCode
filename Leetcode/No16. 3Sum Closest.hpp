#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int static threeSumClosest(vector<int>& nums, int target)
    {
        int i, j, k;
        int minDis = abs(nums[0] + nums[1] + nums[2] - target), curDis, closeSum = nums[0] + nums[1] + nums[2], curSum;
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++)
        {
            j = i + 1;
            k = nums.size() - 1;
            while (j < k)
            {
                curSum = nums[i] + nums[j] + nums[k];
                curDis = abs(curSum - target);
                if (curDis < minDis)
                {
                    minDis = curDis;
                    closeSum = curSum;
                }
                if (curSum > target)
                {
                    k--;
                }
                else if (curSum < target)
                {
                    j++;
                }
                else
                {
                    return curSum;
                }
            }
        }
        return closeSum;
    }

};
void Test()
{
    //int numArray[] = { -4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6 };
    int numArray[] = { 1,2,4,8,16,32,64,128 };
    vector<int> num(numArray, numArray + 8);
    int solution = Solution::threeSumClosest(num, 82);
    cout << solution;
    return;
}