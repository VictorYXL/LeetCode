#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    static int removeElement(vector<int>& nums, int val)
    {
        int p = 0;
        for (auto i = nums.begin(); i != nums.end(); i++)
        {
            if (*i != val)
            {
                nums[p] = *i;
                p++;
            }
        }
        nums.resize(p);
        return p;
    }
};
void Test()
{
    int a[9] = { 3, 4, 7, 7, 4, 9, 7, 1, 3 };
    int b[2] = { 1, 2 };
    vector<int> nums(a, a + 9);
    cout << Solution::removeElement(nums, 7);
    return;
}