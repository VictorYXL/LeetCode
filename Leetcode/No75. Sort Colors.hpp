#pragma once
#include <vector>
#include <iostream>
using namespace std;
#define swap(nums, i1, i2) {auto p = nums[i1]; nums[i1] = nums[i2]; nums[i2] = p;}
class Solution
{
public:
    static void sortColors(vector<int>& nums)
    {
        int begin = 0, end = nums.size() - 1, index = 0;
        while (index <= end)
        {
            switch (nums[index])
            {
            case 0:
                swap(nums, index, begin);
                begin++;
                index++;
                break;
            case 1:
                index++;
                break;
            case 2:
                swap(nums, index, end);
                end--;
                break;
            }
        }
    }
};
void Test()
{
    vector<int> nums = { 2 };
    Solution::sortColors(nums);
    for (auto& num : nums)
    {
        cout << num << " ";
    }
    return;
}