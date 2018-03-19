#include <algorithm>
#include <map>
#include "Solution.h"

int Solution::lengthOfLongestSubstring(string s)
{
	//charLocation reocrd the last location of each char
	map<char, int> charLocation;
	int maxLength = 0, start = 0;
	for (int i = 0; i < s.length(); i++)
	{
		//This char is on the right of start
		if (charLocation.count(s[i]) == 1 && charLocation[s[i]] >= start)
		{
			start = charLocation[s[i]] + 1;
		}
		maxLength = max(maxLength, i - start + 1);
		charLocation[s[i]] = i;
	}
	return maxLength;
}
