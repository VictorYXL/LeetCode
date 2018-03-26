#include <map>
#include "Solution.h"

int Solution::romanToInt(string s)
{
	map<char, int> m = 
	{
		{ 'I', 1 },
		{ 'V', 5 },
		{ 'X', 10 },
		{ 'L', 50 },
		{ 'C', 100 },
		{ 'D', 500 },
		{ 'M', 1000 },
	};
	int num = 0;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (i < s.size() - 1 && m[s[i]] < m[s[i + 1]])
		{
			num -= m[s[i]];
		}
		else
		{
			num += m[s[i]];
		}
		
	}
	return num;
}
