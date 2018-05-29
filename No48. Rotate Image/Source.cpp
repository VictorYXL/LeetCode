#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    /*
    vector<vector<int>> nums =
    {
        { 5, 1, 9, 11 },
        { 2, 4, 8, 10 },
        { 13, 3, 6, 7 },
        { 15, 14, 12, 16 }
    };
    */
    /*
    vector<vector<int>> nums =
    {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    */
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
    Solution::rotate(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}