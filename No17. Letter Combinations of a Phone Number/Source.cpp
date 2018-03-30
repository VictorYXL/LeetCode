#include <string>
#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
	//vector<string> result = Solution::letterCombinations("23");
	vector<string> result = Solution::letterCombinations("2222");
	for (auto i = result.begin(); i != result.end(); i++)
	{
		cout << *i << " ";
	}
	return 0;
}