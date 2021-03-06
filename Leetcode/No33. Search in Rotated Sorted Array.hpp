#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int l = 0, r = nums.size() - 1, m;
        while (l <= r)
        {
            m = (l + r) / 2;
            if (nums[m] == target)
            {
                return m;
            }
            if (nums[l] <= nums[m])
            {
                if (nums[l] <= target && target <= nums[m])
                {
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            if (nums[m] < nums[r])
            {
                if (nums[m] <= target && target <= nums[r])
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
        }
        return -1;
    }
};
void Test()
{
    Solution solution;
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(4);
    cout << solution.search(nums, 4) << endl;
    return;
}