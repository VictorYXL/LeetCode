#pragma once
#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    static bool isMatch(string s, string p)
    {
        if (s.length() == 0)
        {
            for (int k = 0; k < p.length(); k++)
            {
                if (p[k] != '*')
                {
                    return false;
                }
            }
            return true;
        }
        else if (p.length() == 0)
        {
            return false;
        }
        bool **status = new bool *[s.length()];
        for (int i = 0; i < s.length(); i++)
        {
            status[i] = new bool[p.length()];
            memset(status[i], 0, p.length() * sizeof(bool));
        }
        if (p[0] == '?' || p[0] == s[0])
        {
            status[0][0] = true;
        }
        if (p[0] == '*')
        {
            for (int i = 0; i < s.length(); i++)
            {
                status[i][0] = true;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < p.length(); j++)
            {
                if (p[j] == '?' || p[j] == s[i])
                {
                    if (i == 0)
                    {
                        status[i][j] = true;
                        for (int k = 0; k < j; k++)
                        {
                            if (p[k] != '*')
                            {
                                status[i][j] = false;
                                break;
                            }
                        }
                    }
                    else if (j == 0)
                    {
                        status[i][j] = false;
                    }
                    else
                    {
                        status[i][j] = status[i - 1][j - 1];
                    }
                }
                else if (p[j] == '*')
                {
                    for (int k = 0; k <= i; k++)
                    {
                        if (status[k][j - 1] == true)
                        {
                            status[i][j] = true;
                            break;
                        }
                    }
                }
                else
                {
                    status[i][j] = false;
                }
            }
        }
        return status[s.length() - 1][p.length() - 1];
    }
};
void Test()
{
    cout << Solution::isMatch("adceb", "*a*b") << endl;
    cout << Solution::isMatch("babbbbaabababaabbababaababaabbaabababbaaababbababaaaaaabbabaaaabababbabbababbbaaaababbbabbbbbbbbbbaabbb", "b**bb**a**bba*b**a*bbb**aba***babbb*aa****aabb*bbb***a") << endl;
    cout << Solution::isMatch("babbbbaabababaabbababaababaabbaabababbaaababbababaaaaaabbabaaaabababbabbababbbaaaababbbabbbbbbbbbbaabbb", "b**bb**a**bba*b**a*bbb**aba***babbb*aa****aabb*bbb***a") << endl;
    cout << Solution::isMatch("aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba", "a*******b") << endl;
    cout << Solution::isMatch("acdcb", "a*c?b") << endl;
    cout << Solution::isMatch("cb", "?a") << endl;
    cout << Solution::isMatch("abcde", "*") << endl;
    cout << Solution::isMatch("1", "") << endl;
    cout << Solution::isMatch("aa", "*") << endl;
    return;
}