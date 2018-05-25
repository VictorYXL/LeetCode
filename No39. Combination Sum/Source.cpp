#include <iostream>
#include <algorithm>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums = { 2, 3, 6, 7 };
    vector<vector<int>> result = Solution::combinationSum(nums, 6);
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