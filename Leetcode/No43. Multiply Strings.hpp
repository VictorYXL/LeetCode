#pragma once
#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2)
    {
        int n;
        int *sum = new int[num1.length() + num2.length() + 1]();
        string num3;
        for (int n1 = num1.length() - 1; n1 >= 0; n1--)
        {
            for (int n2 = num2.length() - 1; n2 >= 0; n2--)
            {
                int t = num1.length() + num2.length() - n1 - n2 - 2;
                sum[t] += (num1[n1] - '0') * (num2[n2] - '0');
                sum[t + 1] += sum[t] / 10;
                sum[t] %= 10;
            }
        }
        n = num1.length() + num2.length() - 1;
        while (sum[n] == 0)
        {
            n--;
        }
        if (n < 0)
        {
            return "0";
        }
        for (; n >= 0; n--)
        {
            num3 += (sum[n] + '0');
        }
        delete sum;
    }
};
void Test()
{
    Solution solution;
    string nums1 = "2", nums2 = "3";
    cout << solution.multiply(nums1, nums2).c_str() << endl;
    return;
}