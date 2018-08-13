#pragma once
#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string c;
        int al = a.size() - 1, bl = b.size() - 1;
        int an, bn, cn, add = 0;
        while (al >= 0 || bl >= 0)
        {
            if (al >= 0)
            {
                an = a[al] - '0';
            }
            else
            {
                an = 0;
            }
            if (bl >= 0)
            {
                bn = b[bl] - '0';
            }
            else
            {
                bn = 0;
            }
            al--;
            bl--;
            cn = an + bn + add;
            add = cn / 2;
            cn = cn % 2;
            c += (cn + '0');
        }
        if (add != 0)
        {
            c += '1';
        }
        return string(c.rbegin(), c.rend());
    }
};
void Test()
{
    Solution solution;
    string res = solution.addBinary("11", "1");
    std::cout << res;
    return;
}