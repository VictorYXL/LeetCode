#include <iostream>
#include <algorithm>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    cout << Solution::trap(nums) << endl;
    return 0;
}