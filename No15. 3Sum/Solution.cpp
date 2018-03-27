#include <algorithm>
#include <map>
#include "Solution.h"

vector<vector<int>> Solution::threeSum(vector<int>& nums)
{
	vector<vector<int>> solution;
	std::sort(nums.begin(), nums.end());
	map < vector<int>, bool> exist;

	int i = 0, j, k, target;
	while (i < nums.size() && nums[i] <= 0)
	{
		target = 0 - nums[i];
		j = i + 1;
		k = nums.size() - 1;
		while (j < k)
		{
			if (nums[j] + nums[k] == target)
			{
				vector<int> res(3, 0);
				res[0] = nums[i];
				res[1] = nums[j];
				res[2] = nums[k];
				if (exist.count(res) == 0)
				{
					solution.push_back(res);
					exist[res] = true;
				}
				j++;
				k--;
			}
			else if (nums[j] + nums[k] < target)
			{
				j++;
			}
			else
			{
				k--;
			}
		}
		do
		{
			i++;
		} while (i < nums.size() && nums[i] == nums[i - 1]);
			
	}
	return solution;
}
