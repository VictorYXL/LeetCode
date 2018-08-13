#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool operator < (vector<int>a, vector<int> b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        if (a[i] < b[i])
        {
            return true;
        }
        else if (a[i] > b[i])
        {
            return false;
        }
    }
    return a.size() < b.size();
}
bool operator == (vector<int>a, vector<int> b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

class Solution {
public:
    static vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        if (target == 0)
        {
            return vector<vector<int>>();
        }
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res = subCombinationSum(candidates, target, 0);
        sort(res.begin(), res.end());
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
        return res;
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
        t = subCombinationSum(candidates, target - candidates[index], index + 1);
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
    vector<int> nums = { 10, 1, 2, 7, 6, 1, 5 };
    vector<vector<int>> result = Solution::combinationSum2(nums, 8);
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