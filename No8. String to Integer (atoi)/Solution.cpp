#include <string>
#include "Solution.h"

int Solution::myAtoi(string str)
{
	int number = 0, cur = 0, sign = 1;
	while (str[cur] == ' ')
	{
		cur++;
	}
	if (str[cur] == '-')
	{
		sign = -1;
		cur++;
	}
	else if (str[cur] == '+')
	{
		cur++;
	}

	while (str[cur] >= '0' && str[cur] <= '9')
	{
		if (number > INT_MAX / 10 || (number == INT_MAX / 10 && str[cur] - '0' > INT_MAX % 10))
		{
			if (sign == 1)
			{
				return INT_MAX;
			}
			else 
			{
				return INT_MIN;
			}
		}
		number = number * 10 + str[cur] - '0';
		cur++;
	}
	return number * sign;
}
