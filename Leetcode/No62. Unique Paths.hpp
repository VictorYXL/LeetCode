#pragma once
#include <iostream>
class Solution
{
public:
    static int uniquePaths(int m, int n)
    {
        int **count = new int*[m];
        for (int i = 0; i < m; i++)
        {
            count[i] = new int[n];
        }
        for (int i = 0; i < m; i++)
        {
            count[i][0] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            count[0][i] = 1;
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                count[i][j] = count[i - 1][j] + count[i][j - 1];
            }
        }
        return count[m - 1][n - 1];
    }
};
void Test()
{
    Solution solution;
    std::cout << Solution::uniquePaths(7, 3) << std::endl;
    std::cout << Solution::uniquePaths(3, 7) << std::endl;
    return;
}