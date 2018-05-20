#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(11);
    cout << Solution::searchInsert(nums, 7) << endl;
    cout << Solution::searchInsert(nums, 8) << endl;
	return 0;
}