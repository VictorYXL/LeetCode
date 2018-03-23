#include <string>
#include "Solution.h"

string Solution::convert(string s, int numRows)
{
	if (numRows == 1)
	{
		return s;
	}
	int step1, step2;
	int l = s.length();
	int cur = 0;
	string newStr;
	for (int i = 0; i < numRows; i++)
	{
		step1 = 2 * (numRows - i - 1);
		step2 = 2 * i;
		cur = i;
		while (cur < l)
		{
			if (step1 != 0)
			{
				newStr += s[cur];
			}
			cur += step1;
			if (cur < l)
			{
				if (step2 != 0)
				{
					newStr += s[cur];
				}
				cur += step2;
			}
		}
	}
	return newStr;
}
