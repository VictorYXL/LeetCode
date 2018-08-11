#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<string> static generateParenthesis(int n)
    {
        vector<string> result;
        result = subGenerateParenthesis("", n);
        return result;
    }
private:
    vector<string> static subGenerateParenthesis(string curParenthesis, int n)
    {
        vector<string> result, curResult;
        int leftBracket = 0, rightBracket = 0;
        if (curParenthesis.size() == n * 2)
        {
            result.push_back(curParenthesis);
            return result;
        }
        for (int i = 0; i < curParenthesis.size(); i++)
        {
            if (curParenthesis[i] == '(')
            {
                leftBracket++;
            }
            else
            {
                rightBracket++;
            }
        }

        if (leftBracket < n)
        {
            curResult = subGenerateParenthesis(curParenthesis + '(', n);
            result.insert(result.end(), curResult.begin(), curResult.end());
        }
        if (rightBracket < leftBracket)
        {
            curResult = subGenerateParenthesis(curParenthesis + ')', n);
            result.insert(result.end(), curResult.begin(), curResult.end());
        }
        return result;
    }
};
void Test()
{
    vector<string> result = Solution::generateParenthesis(3);
    for (auto p = result.begin(); p != result.end(); p++)
    {
        cout << *p << endl;
    }
    return;
}