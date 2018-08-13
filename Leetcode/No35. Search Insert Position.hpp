#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    static int searchInsert(vector<int>& nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (target <= nums[i])
            {
                return i;
            }
        }
        return nums.size();
    }
};
void Test()
{
    Solution solution;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(11);
    cout << Solution::searchInsert(nums, 7) << endl;
    cout << Solution::searchInsert(nums, 8) << endl;
    return;
}