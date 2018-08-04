#include <iostream>
#include "Solution.h"
int main()
{
    //vector<vector<int>> obstacleGrid = { { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };
    vector<vector<int>> obstacleGrid = { { 1 } };
    std::cout << Solution::uniquePathsWithObstacles(obstacleGrid) << std::endl;
    return 0;
}