#include "Solution.h"

void Solution::rotate(vector<vector<int>>& matrix)
{
    int x, y, t1, t2;
    int n = matrix.size() - 1;
    for (x = 0; x <= n / 2; x++)
    {
        for (y = 0; y <= n / 2; y++)
        {
            t1 = matrix[y][n - x];
            matrix[y][n - x] = matrix[x][y];
            t2 = matrix[n - x][n - y];
            matrix[n - x][n - y] = t1;
            t1 = matrix[n - y][x];
            matrix[n - y][x] = t2;
            matrix[x][y] = t1;
        }
    }
    if (n % 2 == 0)
    {
        x = n / 2;
        for (y = 0; y < n / 2; y++)
        {
            t1 = matrix[n - x][n - y];
            matrix[n - x][n - y] = matrix[n - y][x];
            t2 = matrix[y][n - x];
            matrix[y][n - x] = t1;
            t1 = matrix[x][y];
            matrix[x][y] = t2;
            matrix[n - y][x] = t1;
        }
    }
    return;
}
