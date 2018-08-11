#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    static int removeDuplicates(vector<int>& nums)
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
};
void Test()
{
    int a[9] = { 1, 1, 2, 4, 5, 5, 7, 7, 9 };
    int b[2] = { 1, 2 };
    vector<int> nums(b, b + 2);
    cout << Solution::removeDuplicates(nums);
    return;
}