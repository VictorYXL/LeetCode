#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution 
{
public:
	int removeDuplicates(vector<int>& nums) 
	{
		if (nums.size() <= 2)
		{
			return nums.size();
		}
		int insert_index = 2, i;
		for (i = 2; i < nums.size(); i++)
		{
			if (nums[i] != nums[insert_index - 1] || nums[i] != nums[insert_index - 2])
			{
				nums[insert_index] = nums[i];
				insert_index++;
			}
		}
		return insert_index;
	}
};
void Test()
{
	Solution solution;
	vector<int> nums = { 0, 0, 1, 1, 1, 1, 2, 3, 3 };
	int length = solution.removeDuplicates(nums);
	for (int i = 0; i < length; i++)
	{
		cout << nums[i] << " ";
	}
	return;
}