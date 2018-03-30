#include <vector>
#include "Solution.h"

vector<string> Solution::letterCombinations(string digits)
{
	vector<string> result;
	vector<string> preResult;
	string curStr;
	if (digits.size() == 0)
	{
		return result;
	}
	result.push_back("");
	string numToString[10] = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	for (int i = 0; i < digits.size(); i++)
	{
		preResult = result;
		result.clear();
		for (int j = 0; j < preResult.size(); j++)
		{
			curStr = numToString[digits[i] - '0'];
			for (int k = 0; k < curStr.size(); k++)
			{
				result.push_back(preResult[j] + curStr[k]);
			}
		}
	}
	return result;
}