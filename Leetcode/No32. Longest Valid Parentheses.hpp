#pragma once
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s)
    {
        int* num = (int *)malloc(sizeof(int) * s.length());
        memset(num, 0, sizeof(int) * s.length());
        int max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')' && i > 0)
            {
                if (s[i - 1] == '(')
                {
                    if (i == 1)
                    {
                        num[i] = 2;
                    }
                    else
                    {
                        num[i] = num[i - 2] + 2;
                    }
                }
                else
                {
                    if (num[i - 1] == 0)
                    {
                        num[i] = 0;
                    }
                    else if (num[i - 1] >= i)
                    {
                        num[i] = 0;
                    }
                    else
                    {
                        if (s[i - num[i - 1] - 1] == '(')
                        {
                            if (i - num[i - 1] - 2 >= 0)
                            {
                                num[i] = num[i - 1] + 2 + num[i - num[i - 1] - 2];
                            }
                            else
                            {
                                num[i] = num[i - 1] + 2;
                            }

                        }
                        else
                        {
                            num[i] = 0;
                        }
                    }
                }
            }
            if (num[i] > max)
            {
                max = num[i];
            }
        }
        return max;
    }
};
void Test()
{
    Solution solution;
    cout << solution.longestValidParentheses(")()") << endl;
    cout << solution.longestValidParentheses(")()()") << endl;
    cout << solution.longestValidParentheses(")()())") << endl;
    cout << solution.longestValidParentheses("()(())") << endl;
    return;
}