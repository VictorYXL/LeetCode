#include <string>
#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
	vector<string> strs;
	strs.push_back("abcdeftgh");
	strs.push_back("abcdde");
	strs.push_back("abc2dde");
	strs.push_back("abcde");
	strs.push_back("abcderf");
	cout << Solution::longestCommonPrefix(strs) << endl;
	return 0;
}