#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
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
};
void Test()
{
    Solution solution;
    vector<vector<int>> nums;
    for (int i = 0; i < 1; i++)
    {
        vector<int> num;
        for (int j = 0; j < 1; j++)
        {
            num.push_back(i * 10 + j);
        }
        nums.push_back(num);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    solution.rotate(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    return;
}