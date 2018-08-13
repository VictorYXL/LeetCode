#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool static isPalindrome(int x)
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
    cout << Solution::isPalindrome(1212) << endl;
    cout << Solution::isPalindrome(1) << endl;
    cout << Solution::isPalindrome(10) << endl;
    cout << Solution::isPalindrome(1234321) << endl;
    return;
}