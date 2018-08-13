#pragma once
#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size() - 1, len = 0;
        while (n >= 0 && s[n] == ' ')
        {
            n--;
        }
        while (n >= 0 && s[n] != ' ')
        {
            n--;
            len++;
        }
        return len;
    }
};
void Test()
{
    Solution solution;
    cout << solution.lengthOfLastWord("Hello world") << endl;
    cout << solution.lengthOfLastWord("I hate you") << endl;
    return;
}