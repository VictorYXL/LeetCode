#include <iostream>
#include "Solution.h"
#pragma warning(disable:4146)
using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(2);
    Solution::nextPermutation(nums);
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

	return 0;
}