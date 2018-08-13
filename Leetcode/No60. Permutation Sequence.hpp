#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    static string getPermutation(int n, int k)
    {
        int num[10], p, t = n;
        string s;
        num[0] = 1;
        vector<int> pos = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        for (int i = 1; i <= 9; i++)
        {
            num[i] = num[i - 1] * i;
        }
        k--;
        for (int i = 0; i < t; i++)
        {
            p = k / num[n - 1];
            k -= p * num[n - 1];
            s += (pos[p + 1] + '0');
            pos.erase(pos.begin() + p + 1);
            n--;
        }
        return s;
    }
};
void Test()
{
    Solution solution;
    cout << Solution::getPermutation(4, 9) << endl;
    return;
}