#include "Solution.h"
int Solution::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
{
    int m = obstacleGrid.size(), n = obstacleGrid[0].size();
    int **count = new int*[m];

    for (int i = 0; i < m; i++)
        count[i] = new int[n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (obstacleGrid[i][0] == 1)
        {
            break;
        }
        count[i][0] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (obstacleGrid[0][i] == 1)
        {
            break;
        }
        count[0][i] = 1;
    }
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
        {
            if (obstacleGrid[i][j] == 1)
            {
                count[i][j] = 0;
            }
            else
            {
                count[i][j] = count[i - 1][j] + count[i][j - 1];
            }
        }
    return count[m - 1][n - 1];
    return 0;
}
