#include <iostream>
#include "Solution.h"
using namespace std;
vector<int> Solution::twoSum(vector<int>& nums, int target)
{
	vector<int> result;
	for (vector<int>::iterator p = nums.begin(); (p + 1)!= nums.end(); p++)
	{
		auto n1 = find(p + 1, nums.end(), target - *p);
		if (n1 != nums.end())
		{
			result.push_back(p - nums.begin());
			result.push_back(n1 - nums.begin());
		}
	}
	return result;
}