#include <string>
#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
	//int numArray[] = { -4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6 };
	//int numArray[] = { };
	vector<int> num;// (numArray, numArray + 6);
	vector<vector<int>> solution = Solution::fourSum(num, 0);
	for (vector<vector<int>>::iterator i = solution.begin(); i != solution.end(); i++)
	{
		for (vector<int>::iterator j = i->begin(); j != i->end(); j++)
		{
			cout << *j << " ";
		}
		cout << endl;
	}
	return 0;
}