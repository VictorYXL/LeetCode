#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int y = 0, tmp = x;
        while (tmp > 0)
        {
            y = y * 10 + tmp % 10;
            tmp /= 10;
        }
        return x == y;

    }
};
void Test()
{
    Solution solution;
    cout << solution.isPalindrome(1212) << endl;
    cout << solution.isPalindrome(1) << endl;
    cout << solution.isPalindrome(10) << endl;
    cout << solution.isPalindrome(1234321) << endl;
    return;
}