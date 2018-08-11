#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static bool canJump(vector<int>& nums)
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
};
void Test()
{
    vector<int>num = { 1, 2, 3 };
    cout << Solution::canJump(num) << endl;
    return;
}