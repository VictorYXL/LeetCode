#include "Solution.h"
#include <algorithm>
vector<vector<string>> Solution::groupAnagrams(vector<string>& strs)
{
    string s, p;
    bool flag;
    vector<vector<string>> res;
    vector<string> first;
    vector<vector<int>> index;
    for (int i = 0; i < strs.size(); i++)
    {
        s = strs[i];
        sort(s.begin(), s.end());
        auto p = find(first.begin(), first.end(), s);
        if (p == first.end())
        {
            first.push_back(s);
            index.push_back({ i });
        }
        else
        {
            index[p - first.begin()].push_back(i);
        }

    }
    for (int i = 0; i < index.size(); i++)
    {
        vector<string> tmp;
        for (int j = 0; j < index[i].size(); j++)
        {
            tmp.push_back(strs[index[i][j]]);
        }
        res.push_back(tmp);
    }
    return res;
}
