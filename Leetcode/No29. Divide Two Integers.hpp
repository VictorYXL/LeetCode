#pragma once
#include <iostream>
#pragma warning(disable:4146)
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor)
    {
        const int int_max = 2147483647;
        const int int_min = (-2147483647 - 1);
        int flag = 1, res = 0;
        if (divisor == 0)
        {
            return int_max;
        }
        if (dividend == int_min)
        {
            if (divisor == -1)
            {
                return int_max;
            }
            if (divisor == int_min)
            {
                return 1;
            }
            if (divisor > 0)
            {
                dividend = dividend + divisor;
            }
            else
            {
                dividend = dividend - divisor;
            }
            res = 1;
        }
        if (divisor == int_min)
        {
            return 0;
        }

        flag = (dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0) ? 1 : -1;
        long long divisorll = divisor > 0 ? divisor : -divisor;
        long long dividendll = dividend > 0 ? dividend : -dividend;
        while (dividendll >= divisorll)
        {
            long long tempdividendll = dividendll, tempdivisorll = divisorll, times = 1;
            while (tempdividendll >= divisorll)
            {
                tempdividendll = tempdividendll >> 1;
                tempdivisorll = tempdivisorll << 1;
                times = times << 1;
            }
            times = times >> 1;
            tempdivisorll = tempdivisorll >> 1;
            res = res + times;
            dividendll = dividendll - tempdivisorll;
        }
        return flag == 1 ? res : -res;
    }
};
void Test()
{
    Solution solution;
    cout << solution.divide(-2147483648, -1) << endl;
    cout << solution.divide(-2147483648, 2) << endl;
    return;
}