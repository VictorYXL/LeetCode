#pragma once
#include <iostream>
using namespace std;
class Solution
{
public:
    static int mySqrt(int x)
    {
        long long left = 1, right = x / 2 + 1, m = (left + right) / 2;
        while (left <= right)
        {
            m = (left + right) / 2;
            if (m * m <= x && (m + 1) * (m + 1) > x)
            {
                return m;
            }
            else if (m * m > x)
            {
                right = m - 1;
            }
            else
            {
                left = m + 1;
            }
        }
        return 0;
    }
};
void Test()
{
    cout << Solution::mySqrt(0) << endl;
    cout << Solution::mySqrt(4) << endl;
    cout << Solution::mySqrt(2147395599) << endl;
    return;
}