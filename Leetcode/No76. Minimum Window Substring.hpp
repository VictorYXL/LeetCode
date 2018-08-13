#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        int best_begin = 0, best_length = s.size() + 1, begin = 0, end = 0;
        int letter_count[128], count = t.size();
        memset(letter_count, 0, 128 * sizeof(int));
        for (char c : t)
        {
            letter_count[c]++;
        }
        while (end < s.size())
        {
            if (letter_count[s[end]] > 0)
            {
                count--;
            }
            letter_count[s[end]]--;
            end++;
            while (count == 0)
            {
                if (end - begin< best_length)
                {
                    best_begin = begin;
                    best_length = end - begin;
                }
                if (letter_count[s[begin]] == 0)
                {
                    count++;
                }
                letter_count[s[begin]]++;
                begin++;
            }
        }
        if (best_length == s.size() + 1)
        {
            return "";
        }
        else
        {
            return s.substr(best_begin, best_length + 1);
        }
    }
};
void Test()
{
    Solution solution;
    string res = solution.minWindow("ab", "a");
    cout << res;
    return;
}