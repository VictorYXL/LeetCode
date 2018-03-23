#include <string>
#include "Solution.h"

int Solution::reverse(int x)
{
	
	long long newX = 0;
	while (x != 0)
	{
		newX *= 10;
		newX += x % 10;
		x /= 10;
	}
	if (newX > INT_MAX || newX < INT_MIN)
	{
		newX = 0;
	}
	return newX;
}
