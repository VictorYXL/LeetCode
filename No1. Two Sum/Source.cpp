#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
	int numArray[] = { 3, 2, 4 };
	vector<int> nums(numArray, numArray + 3);
	vector<int>& result = Solution::twoSum(nums, 6);
	cout << result.at(0) << " " << result.at(1) << endl;
	return 0;
}