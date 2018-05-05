#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
    int a[9] = { 3, 4, 7, 7, 4, 9, 7, 1, 3 };
    int b[2] = { 1, 2 };
    vector<int> nums(a, a + 9);
    cout << Solution::removeElement(nums, 7);
	return 0;
}