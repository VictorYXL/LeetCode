#pragma once
#include <iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n)
    {
        double res = 1.0;
        long long p = n;
        p = p > 0 ? p : -p;
        while (p != 0)
        {
            if (p % 2 == 1)
            {
                res *= x;
            }
            x *= x;
            p /= 2;
        }

        return n > 0 ? res : 1 / res;
    }
};
void Test()
{
    Solution solution;
    cout << solution.myPow(2.0, -2147483648) << endl;
    return;
}