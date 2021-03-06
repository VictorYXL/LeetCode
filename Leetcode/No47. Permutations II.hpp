#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        return subPermute(nums, 0);
    }
    vector<vector<int>> subPermute(vector<int>& nums, int index)
    {
        vector<vector<int>> res, tmpRes;
        int t;
        bool accept;
        if (index == nums.size() - 1)
        {
            res.push_back(nums);
            return res;
        }
        for (int i = index; i < nums.size(); i++)
        {
            accept = true;
            for (int k = index; k < i; k++)
            {
                if (nums[k] == nums[i])
                {
                    accept = false;
                    break;
                }
            }
            if (accept)
            {
                t = nums[i];
                nums[i] = nums[index];
                nums[index] = t;

                tmpRes = subPermute(nums, index + 1);
                res.insert(res.end(), tmpRes.begin(), tmpRes.end());

                t = nums[i];
                nums[i] = nums[index];
                nums[index] = t;
            }
        }
        return res;
    }
};
void Test()
{
    Solution solution;
    vector<int> nums =
    {
        1, 2, 3
    };
    vector<vector<int>> res = solution.permute(nums);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return;
}