#include "Solution.h"
using namespace std;

vector<int> Solution::spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> res;
    if (matrix.size() == 0 || matrix[0].size() == 0)
        return res;
    int rowBegin = 0, rowEnd = matrix.size() - 1, colBegin = 0, colEnd = matrix[0].size() - 1;
    while (rowBegin < rowEnd && colBegin < colEnd)
    {
        for (int i = colBegin; i < colEnd; i++)
        {
            res.push_back(matrix[rowBegin][i]);
        }
        for (int i = rowBegin; i < rowEnd; i++)
        {
            res.push_back(matrix[i][colEnd]);
        }
        for (int i = colEnd; i > colBegin; i--)
        {
            res.push_back(matrix[rowEnd][i]);
        }
        
        for (int i = rowEnd; i > rowBegin; i--)
        {
            res.push_back(matrix[i][colBegin]);
        }
        rowBegin++;
        colBegin++;
        colEnd--;
        rowEnd--;
    }
    if (rowBegin == rowEnd)
    {
        for (int i = colBegin; i <= colEnd; i++)
        {
            res.push_back(matrix[rowBegin][i]);
        }
    }
    else if (colBegin == colEnd)
    {
        for (int i = rowBegin; i <= rowEnd; i++)
        {
            res.push_back(matrix[i][colEnd]);
        }
    }
    return res;
}
