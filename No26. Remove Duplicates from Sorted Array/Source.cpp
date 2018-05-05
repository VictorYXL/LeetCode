#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
    int a[9] = { 1, 1, 2, 4, 5, 5, 7, 7, 9 };
    int b[2] = { 1, 2 };
    vector<int> nums(b, b + 2);
    cout << Solution::removeDuplicates(nums);
	return 0;
}