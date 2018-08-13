#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        if (matrix.size() <= 0 || matrix[0].size() <= 0)
        {
            return false;
        }
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m * n - 1, middle = 0;
        while (left <= right)
        {
            middle = (left + right) / 2;
            if (target > matrix[middle / n][middle % n])
            {
                left = middle + 1;
            }
            else if (target < matrix[middle / n][middle % n])
            {
                right = middle - 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
void Test()
{
    Solution solution;
    vector<vector<int>> matrix = { { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 50 } };
    cout << solution.searchMatrix(matrix, 3) << endl;
    return;
}