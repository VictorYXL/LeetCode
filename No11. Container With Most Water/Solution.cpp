#include <vector>
#include "Solution.h"

int Solution::maxArea(vector<int>& height)
{
	int maxArea = 0, left = 0, right = height.size() - 1;
	int area, shorterLine;
	while (left <= right)
	{
		shorterLine = height[left] > height[right] ? height[right] : height[left];
		area = shorterLine * (right - left);
		if (area > maxArea)
		{
			maxArea = area;
		}
		if (height[left] > height[right])
		{
			right--;
		}
		else
		{
			left++;
		}
	}
	return maxArea;
}
