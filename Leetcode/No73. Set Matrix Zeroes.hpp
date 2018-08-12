#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    static void setZeroes(vector<vector<int>>& matrix)
    {
        if (matrix.size() <= 0 || matrix[0].size() <= 0)
        {
            return;
        }
        bool first_row = false, first_col = false;
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[0][j] == 0)
            {
                first_row = true;
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] == 0)
            {
                first_col = true;
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 1; j < matrix[0].size(); j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (first_row)
        {
            for (int k = 0; k < matrix[0].size(); k++)
            {
                matrix[0][k] = 0;
            }
        }
        if (first_col)
        {
            for (int k = 0; k < matrix.size(); k++)
            {
                matrix[k][0] = 0;
            }
        }
        return;
    }
};
void Test()
{
    //vector<vector<int>> matrix = { { 0, 1, 2, 0 }, { 3, 4, 5, 2 }, { 1, 3, 1, 5 } };
    vector<vector<int>> matrix = { { 1, 1, 1 },{ 1, 0, 1 },{ 1, 1, 1 } };
    Solution::setZeroes(matrix);
    for (auto& line : matrix)
    {
        for (auto& num : line)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return;
}