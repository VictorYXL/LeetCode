#pragma once
#include <string>
#include <stack>  
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> rest;
        char p;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                rest.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if (rest.size() <= 0)
                {
                    return false;
                }
                p = rest.top();
                rest.pop();
                if (!((p == '(' && s[i] == ')') || (p == '[' && s[i] == ']') || (p == '{' && s[i] == '}')))
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return rest.size() == 0;
    }
};
void Test()
{
    Solution solution;
    cout << solution.isValid("{}{}{}");
    return;
}