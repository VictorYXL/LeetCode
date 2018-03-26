#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
	int heightArray[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
	std::vector<int> height(heightArray, heightArray + 9);
	cout << Solution::maxArea(height) << endl;
}