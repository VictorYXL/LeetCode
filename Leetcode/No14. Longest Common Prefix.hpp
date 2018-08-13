#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string static longestCommonPrefix(vector<string>& strs)
    {
        if (strs.size() == 0)
        {
            return "";
        }
        for (int i = 0; i < strs[0].length(); i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (i >= strs[j].length() || strs[j][i] != strs[0][i])
                {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
    }

};
void Test()
{
    Solution solution;
    vector<string> strs;
    strs.push_back("abcdeftgh");
    strs.push_back("abcdde");
    strs.push_back("abc2dde");
    strs.push_back("abcde");
    strs.push_back("abcderf");
    cout << Solution::longestCommonPrefix(strs) << endl;
    return;
}