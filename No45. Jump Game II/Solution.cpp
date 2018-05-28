#include "Solution.h"
#include <iostream>
#include <algorithm>
using namespace std;

int Solution::jump(vector<int>& nums)
{
    int curMax = 0, nextMax = 0;
    int step = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > curMax)
        {
            curMax = nextMax;
            step++;
        }
        nextMax = nextMax > (nums[i] + i) ? nextMax : (nums[i] + i);
    }
    return step;
}
