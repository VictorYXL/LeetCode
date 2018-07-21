#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    auto res = Solution::solveNQueens(8);
    for (auto& solution : res)
    {
        for (auto& line : solution)
        {
            printf("%s\n", line.c_str());
        }
        printf("\n");
    }
    
    return 0;
}