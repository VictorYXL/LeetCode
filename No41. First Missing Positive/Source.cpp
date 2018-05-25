#include <iostream>
#include <algorithm>
#include "Solution.h"
using namespace std;
int main()
{
    vector<int> nums = { 1, 1 };
    cout << Solution::firstMissingPositive(nums) << endl;
    return 0;
}