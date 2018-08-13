#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static vector<vector<int>> subsets(vector<int>& nums, int index, vector<int> cur)
    {
        if (index == nums.size())
        {
            return {cur};
        }
        vector<vector<int>> res, tmp;
        res = subsets(nums, index + 1, cur);
        cur.push_back(nums[index]);
        tmp = subsets(nums, index + 1, cur);
        res.insert(res.end(), tmp.begin(), tmp.end());
        return res;
    }
    static vector<vector<int>> subsets(vector<int>& nums)
    {
        return subsets(nums, 0, {});
    }
};
void Test()
{
    vector<int> nums = { 1, 2, 3 };
    vector<vector<int>> res = Solution::subsets(nums);
    for (auto& one : res)
    {
        for (auto& num : one)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return;
}