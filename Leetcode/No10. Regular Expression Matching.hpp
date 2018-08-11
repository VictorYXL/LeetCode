#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool static isMatch(string s, string p)
    {
        int i = 0, j = 0, k = 0;
        //"abbcdddef", "ab*c.*e."
        while (i <= s.length() && j < p.length())
        {
            if (j + 1 < p.length() && p[j + 1] == '*')
            {
                if (p[j] == '.')
                {
                    k = i;
                    while (k <= s.length())
                    {
                        if (isMatch(s.substr(k), p.substr(j + 2)) == true)
                        {
                            return true;
                        }
                        k++;
                    }
                    return false;
                }
                else if (s[i] == p[j])
                {
                    k = i;
                    while (k < s.length() && s[k] == s[i])
                    {
                        if (isMatch(s.substr(k), p.substr(j + 2)) == true)
                        {
                            return true;
                        }
                        k++;
                    }
                    //Consider when * means no character
                    return isMatch(s.substr(k), p.substr(j + 2));
                }
                else
                {
                    return isMatch(s.substr(i), p.substr(j + 2));
                }
            }
            else if (p[i] == '.')
            {
                i++;
                j++;
            }
            else if (s[i] == p[j])
            {
                i++;
                j++;
            }
            else
            {
                return false;
            }
        }
        if (i == s.length() && j == p.length())
        {
            return true;
        }
        else
        {
            return false;
        }
        return true;
    }
};
void Test()
{
    cout << Solution::isMatch("", "c*c*") << endl;
    return;
}