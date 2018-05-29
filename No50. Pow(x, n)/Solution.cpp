#include "Solution.h"
double Solution::myPow(double x, int n)
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
    
    return n > 0 ? res : 1 / res ;
}
