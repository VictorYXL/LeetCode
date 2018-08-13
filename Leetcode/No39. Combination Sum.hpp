#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    static vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        if (target == 0)
        {
            return vector<vector<int>>();
        }
        sort(candidates.begin(), candidates.end());
        return subCombinationSum(candidates, target, 0);
    }
    static vector<vector<int>> subCombinationSum(vector<int>& candidates, int target, int index)
    {
        vector<vector<int>> res;
        if (candidates.size() <= index || candidates[index] > target)
        {
            if (target == 0)
            {
                res.push_back(vector<int>());
            }
            return res;
        }
        vector<vector<int>> t;
        t = subCombinationSum(candidates, target - candidates[index], index);
        for (auto p = t.begin(); p != t.end(); p++)
        {
            p->insert(p->begin(), candidates[index]);
        }
        res.insert(res.begin(), t.begin(), t.end());

        t = subCombinationSum(candidates, target, index + 1);
        res.insert(res.begin(), t.begin(), t.end());
        return res;
    }
};
void Test()
{
    Solution solution;
    vector<int> nums = { 2, 3, 6, 7 };
    vector<vector<int>> result = Solution::combinationSum(nums, 6);
    for (auto p = result.begin(); p != result.end(); p++)
    {

        for (auto q = (*p).begin(); q != (*p).end(); q++)
        {
            cout << *q << " ";
        }
        cout << endl;

    }
    return;
}