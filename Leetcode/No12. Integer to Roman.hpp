#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string static intToRoman(int num)
    {
        string thousand[4] = { "", "M", "MM", "MMM" };
        string hundred[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
        string ten[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
        string one[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
        string roman = thousand[num / 1000] + hundred[num % 1000 / 100] + ten[num % 100 / 10] + one[num % 10];
        return roman;
    }

};
void Test()
{
    cout << Solution::intToRoman(2437) << endl;
    return;
}