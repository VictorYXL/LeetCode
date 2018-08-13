#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int rowBegin = 0, rowEnd = n - 1, colBegin = 0, colEnd = n - 1;
        int num = 1;
        int times = n / 2;
        for (int i = 0; i < times; i++)
        {
            for (int j = colBegin; j < colEnd; j++)
            {
                res[rowBegin][j] = num++;
            }
            for (int j = rowBegin; j < rowEnd; j++)
            {
                res[j][colEnd] = num++;
            }
            for (int j = colEnd; j > colBegin; j--)
            {
                res[rowEnd][j] = num++;
            }
            for (int j = rowEnd; j > rowBegin; j--)
            {
                res[j][colBegin] = num++;
            }
            rowBegin++;
            colBegin++;
            rowEnd--;
            colEnd--;
        }
        if (n % 2 != 0)
        {
            res[n / 2][n / 2] = num;
        }
        return res;
    }
};
void Test()
{
    Solution solution;
    auto res = Solution::generateMatrix(4);
    for (auto& line : res)
    {
        for (auto& num : line)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}