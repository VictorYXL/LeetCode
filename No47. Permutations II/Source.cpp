#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums =
    {
        1, 2, 3
    };
    vector<vector<int>> res = Solution::permute(nums);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}