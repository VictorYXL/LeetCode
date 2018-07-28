#include "Solution.h"
using namespace std;

bool Solution::canJump(vector<int>& nums)
{
    if (nums.size() <= 0)
    {
        return true;
    }
    int curPos = 0, maxPos = 0;
    while (maxPos < nums.size() && curPos <= maxPos)
    {
        maxPos = maxPos > (curPos + nums[curPos]) ? maxPos : (curPos + nums[curPos]);
        curPos++;
    }
    return maxPos >= (nums.size() - 1);
}
