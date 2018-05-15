#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(4);
    cout << Solution::search(nums, 4) << endl;
	return 0;
}