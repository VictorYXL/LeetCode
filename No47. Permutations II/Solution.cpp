#include "Solution.h"

vector<vector<int>> Solution::permute(vector<int>& nums)
{
    return subPermute(nums, 0);
}
vector<vector<int>> Solution::subPermute(vector<int>& nums, int index)
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
