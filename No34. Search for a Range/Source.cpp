#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(8);
    nums.push_back(10);
    cout << Solution::searchRange(nums, 8)[0] << endl;
    cout << Solution::searchRange(nums, 8)[1] << endl;
	return 0;
}