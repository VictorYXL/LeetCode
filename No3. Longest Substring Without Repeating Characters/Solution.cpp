#include <algorithm>
#include <map>
#include "Solution.h"
#include<iostream>

int Solution::lengthOfLongestSubstring(string s)
{
	map<char, int> charLocation;
	int maxLength = 0, start = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (charLocation.count(s[i]) == 1 && charLocation[s[i]] >= start)
		{
			start = charLocation[s[i]] + 1;
		}
		maxLength = max(maxLength, i - start + 1);
		charLocation[s[i]] = i;
	}
	return maxLength;
}
