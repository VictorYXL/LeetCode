#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        for (vector<int>::iterator p = nums.begin(); (p + 1) != nums.end(); p++)
        {
            auto n1 = find(p + 1, nums.end(), target - *p);
            if (n1 != nums.end())
            {
                result.push_back(p - nums.begin());
                result.push_back(n1 - nums.begin());
            }
        }
        return result;
    }
};
void Test()
{
    Solution solution;
    int numArray[] = { 3, 2, 4 };
    vector<int> nums(numArray, numArray + 3);
    vector<int> result = solution.twoSum(nums, 6);
    cout << result.at(0) << " " << result.at(1) << endl;
    return;
}