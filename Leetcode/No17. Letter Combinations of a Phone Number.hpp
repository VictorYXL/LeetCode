#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> static letterCombinations(string digits)
    {
        vector<string> result;
        vector<string> preResult;
        string curStr;
        if (digits.size() == 0)
        {
            return result;
        }
        result.push_back("");
        string numToString[10] = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        for (int i = 0; i < digits.size(); i++)
        {
            preResult = result;
            result.clear();
            for (int j = 0; j < preResult.size(); j++)
            {
                curStr = numToString[digits[i] - '0'];
                for (int k = 0; k < curStr.size(); k++)
                {
                    result.push_back(preResult[j] + curStr[k]);
                }
            }
        }
        return result;
    }

};
void Test()
{
    //vector<string> result = Solution::letterCombinations("23");
    vector<string> result = Solution::letterCombinations("2222");
    for (auto i = result.begin(); i != result.end(); i++)
    {
        cout << *i << " ";
    }
    return;
}