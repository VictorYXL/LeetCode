#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> static fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> solution;
        if (nums.size() < 4)
        {
            return solution;
        }
        std::sort(nums.begin(), nums.end());
        map<vector<int>, bool> exist;

        int i = 0, i1, j, k, curTarget;
        while (i < nums.size() - 3)
        {
            i1 = i + 1;
            while (i1 < nums.size() - 2)
            {
                curTarget = target - nums[i] - nums[i1];
                j = i1 + 1;
                k = nums.size() - 1;
                while (j < k)
                {
                    if (nums[j] + nums[k] == curTarget)
                    {
                        vector<int> res(4, 0);
                        res[0] = nums[i];
                        res[1] = nums[i1];
                        res[2] = nums[j];
                        res[3] = nums[k];
                        if (exist.count(res) == 0)
                        {
                            solution.push_back(res);
                            exist[res] = true;
                        }
                        j++;
                        k--;
                    }
                    else if (nums[j] + nums[k] < curTarget)
                    {
                        j++;
                    }
                    else
                    {
                        k--;
                    }
                }
                do
                {
                    i1++;
                } while (i1 < nums.size() - 1 && nums[i1] == nums[i1 - 1]);
            }
            do
            {
                i++;
            } while (i < nums.size() - 1 && nums[i] == nums[i - 1]);
        }
        return solution;
    }

};
void Test()
{
    Solution solution;
    vector<int> num;
    vector<vector<int>> res = Solution::fourSum(num, 0);
    for (vector<vector<int>>::iterator i = res.begin(); i != res.end(); i++)
    {
        for (vector<int>::iterator j = i->begin(); j != i->end(); j++)
        {
            cout << *j << " ";
        }
        cout << endl;
    }
    return;
}