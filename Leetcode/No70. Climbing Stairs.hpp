#pragma once
#include <iostream>
using namespace std;
class Solution
{
public:
    static int climbStairs(int n)
    {
        if (n < 3)
        {
            return  n;
        }
        int a, b, c = 3;
        a = 1;
        b = 2;
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
void Test()
{
    Solution solution;
    cout << Solution::climbStairs(2) << endl;
    cout << Solution::climbStairs(3) << endl;
    cout << Solution::climbStairs(5) << endl;
    return;
}