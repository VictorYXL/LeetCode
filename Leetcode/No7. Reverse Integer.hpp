#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    int static reverse(int x)
    {
        long long newX = 0;
        while (x != 0)
        {
            newX *= 10;
            newX += x % 10;
            x /= 10;
        }
        if (newX > INT_MAX || newX < INT_MIN)
        {
            newX = 0;
        }
        return newX;
    }
};
void Test()
{
    Solution solution;
    cout << Solution::reverse(1534236469) << endl;
    return;
}