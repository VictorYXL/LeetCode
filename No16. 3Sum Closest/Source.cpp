#include <string>
#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
	//int numArray[] = { -4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6 };
	int numArray[] = { 1,2,4,8,16,32,64,128};
	vector<int> num(numArray, numArray + 8);
	int solution = Solution::threeSumClosest(num, 82);
	cout << solution;
	return 0;
}