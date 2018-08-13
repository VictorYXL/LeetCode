#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{

public:
    vector<vector<int>> subCombine(int n, int k, int deep, vector<int> cur)
    {
        vector<vector<int>> res;
        vector<vector<int>> subres;
        if (deep >= k)
        {
            return { cur };
        }
        int begin = (cur.size() > 0 ? *cur.rbegin() : 0) + 1;
        for (int i = begin; i <= n; i++)
        {
            cur.push_back(i);
            subres = subCombine(n, k, deep + 1, cur);
            res.insert(res.end(), subres.begin(), subres.end());
            cur.pop_back();
        }
        return res;
    }
    vector<vector<int>> combine(int n, int k)
    {
        return subCombine(n, k, 0, {});
    }
};
void Test()
{
    Solution solution;
    vector<vector<int>> res = solution.combine(4, 2);
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