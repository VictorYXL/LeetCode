#include "Solution.h"
vector<vector<string>> Solution::solveNQueens(int n)
{
    vector<vector<string>> res;
    vector<string> cur;
    for (int i = 0; i < n; i++)
    {
        string p;
        for (int j = 0; j < n; j++)
        {
            p.push_back('.');
        }
        cur.push_back(p);
    }
    solveNQueens(res, 0, n, cur);
    return res;
}

bool Solution::isValid(vector<string>& cur, int row, int col, int n)
{
    int x, y;
    for (y = 0; y < n; y++)
    {
        if (cur[y][col] == 'Q')
            return false;
    }
    x = col;
    y = row;
    while (x >=0 && y >= 0)
    {
        if (cur[y--][x--] == 'Q')
            return false;
    }
    x = col;
    y = row;
    while (x < n && y >= 0)
    {
        if (cur[y--][x++] == 'Q')
            return false;
    }
    return true;
}

void Solution::solveNQueens(vector<vector<string>>& res, int row, int n, vector<string>& cur)
{
    if (row == n)
    {
        res.push_back(cur);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isValid(cur, row, i, n))
        {
            cur[row][i] = 'Q';
            solveNQueens(res, row + 1, n, cur);
            cur[row][i] = '.';
        }
    }
    return;
}
