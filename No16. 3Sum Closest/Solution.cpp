#include <algorithm>
#include <map>
#include "Solution.h"

int Solution::threeSumClosest(vector<int>& nums, int target)
{
	int i, j, k;
	int minDis = abs(nums[0] + nums[1] + nums[2] - target), curDis, closeSum = nums[0] + nums[1] + nums[2], curSum;
	std::sort(nums.begin(), nums.end());
	
	for (int i = 0; i < nums.size() - 2; i++)
	{
		j = i + 1;
		k = nums.size() - 1;
		while (j < k)
		{
			curSum = nums[i] + nums[j] + nums[k];
			curDis = abs(curSum - target);
			if (curDis < minDis)
			{
				minDis = curDis;
				closeSum = curSum;
			}
			if (curSum > target)
			{
				k--;
			}
			else if (curSum < target)
			{
				j++;
			}
			else
			{
				return curSum;
			}
		}
	}
	return closeSum;
}