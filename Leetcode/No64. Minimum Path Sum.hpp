#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static int minPathSum(vector<vector<int>>& grid)
    {
        vector<vector<int>> res = grid;
        if (grid.size() <= 0)
        {
            return 0;
        }
        for (int i = 1; i < grid.size(); i++)
        {
            res[i][0] += res[i - 1][0];
        }
        for (int i = 1; i < grid[0].size(); i++)
        {
            res[0][i] += res[0][i - 1];
        }
        for (int i = 1; i < grid.size(); i++)
        {
            for (int j = 1; j < grid[0].size(); j++)
            {
                res[i][j] += res[i][j - 1] > res[i - 1][j] ? res[i - 1][j] : res[i][j - 1];
            }
        }
        return res[grid.size() - 1][grid[0].size() - 1];
    }
};
void Test()
{
    Solution solution;
    vector<vector<int>> grid = { { 1, 3, 1 }, { 1, 5, 1 }, { 4, 2, 1 } };
    std::cout << Solution::minPathSum(grid) << std::endl;
    return;
}