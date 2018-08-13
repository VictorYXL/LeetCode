#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static vector<int> plusOne(vector<int>& digits)
    {
        int n = digits.size() - 1;
        while (n >= 0 && digits[n] == 9)
        {
            digits[n] = 0;
            n--;
        }
        if (n >= 0)
        {
            digits[n]++;
        }
        else
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
void Test()
{
    Solution solution;
    vector<int> num = { 1, 2, 3 };
    num = Solution::plusOne(num);
    for (auto& p : num)
    {
        std::cout << p << " ";
    }
    return;
}