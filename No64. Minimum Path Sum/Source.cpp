#include <iostream>
#include "Solution.h"
int main()
{
    vector<vector<int>> grid = { { 1, 3, 1 }, { 1, 5, 1 }, { 4, 2, 1 } };
    std::cout << Solution::minPathSum(grid) << std::endl;
    return 0;
}