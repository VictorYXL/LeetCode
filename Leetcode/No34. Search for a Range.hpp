#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    static vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> range;
        if (nums.size() <= 0)
        {
            range.push_back(-1);
            range.push_back(-1);
            return range;
        }

        int l = 0, r = nums.size() - 1, m;
        while (l <= r)
        {
            if (nums[l] == target)
            {
                range.push_back(l);
                break;
            }
            if (l >= r)
            {
                range.push_back(-1);
                range.push_back(-1);
                return range;
            }
            m = (l + r) / 2;
            if (target < nums[m])
            {
                r = m - 1;
            }
            else if (target > nums[m])
            {
                l = m + 1;
            }
            else
            {
                if (nums[m - 1] == target)
                {
                    r = m - 1;
                }
                else
                {
                    range.push_back(m);
                    break;
                }
            }
        }
        if (range.size() == 0)
        {
            range.push_back(-1);
            range.push_back(-1);
            return range;
        }
        r = nums.size() - 1;
        while (l <= r)
        {
            if (nums[r] == target)
            {
                range.push_back(r);
                break;
            }
            if (l >= r)
            {
                range.push_back(-1);
                range.push_back(-1);
                return range;
            }
            m = (l + r) / 2;
            if (target < nums[m])
            {
                r = m - 1;
            }
            else if (target > nums[m])
            {
                l = m + 1;
            }
            else
            {
                if (nums[m + 1] == target)
                {
                    l = m + 1;
                }
                else
                {
                    range.push_back(m);
                    break;
                }
            }
        }
        return range;
    }
};
void Test()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(8);
    nums.push_back(10);
    cout << Solution::searchRange(nums, 8)[0] << endl;
    cout << Solution::searchRange(nums, 8)[1] << endl;
    return;
}