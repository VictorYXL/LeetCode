#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string static longestPalindrome(std::string s)
    {
        //pa[i][j] == true : pa[i ... j] is palindrom
        bool pa[1000][1000] = { false };
        int maxStart = 0, maxLength = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            pa[i][i] = true;
            if (s[i] == s[i + 1])
            {
                pa[i][i + 1] = true;
                maxStart = i;
                maxLength = 2;
            }
        }
        pa[s.size() - 1][s.size() - 1] = true;

        for (int len = 3; len <= s.size(); len++)
        {
            for (int start = 0; start + len - 1 < s.size(); start++)
            {
                int end = start + len - 1;
                if (s[start] == s[end] && pa[start + 1][end - 1] == true)
                {
                    pa[start][end] = true;
                    maxStart = start;
                    maxLength = len;
                }
            }
        }
        return s.substr(maxStart, maxLength);
    }
};
void Test()
{
    Solution solution;
    cout << Solution::longestPalindrome("a") << endl;
    cout << Solution::longestPalindrome("ababa") << endl;
    cout << Solution::longestPalindrome("aaaa") << endl;
    cout << Solution::longestPalindrome("1aa1") << endl;
    cout << Solution::longestPalindrome("1aaf") << endl;
    return;
}