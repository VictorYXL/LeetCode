#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    int numArray[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    vector<int> nums(numArray, numArray + 8);
    cout << Solution::maxSubArray(nums) << endl;
    return 0;
}