#include <iostream>
#include <algorithm>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums = { 10, 1, 2, 7, 6, 1, 5 };
    vector<vector<int>> result = Solution::combinationSum2(nums, 8);
    for (auto p = result.begin(); p != result.end(); p++)
    {

        for (auto q = (*p).begin(); q != (*p).end(); q++)
        {
            cout << *q << " ";
        }
        cout << endl;

    }
    return 0;
}