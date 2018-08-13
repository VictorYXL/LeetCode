#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution
{
public:
    double static findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        //Make sure nums2 is shorter than nums2
        if (nums1.size() > nums2.size())
        {
            vector<int> t;
            t = nums1;
            nums1 = nums2;
            nums2 = t;
        }
        int l1 = nums1.size(), l2 = nums2.size();
        if (l2 == 0)
        {
            if (l1 == 0)
            {
                return 0.0;
            }
            else
            {
                if (l1 % 2 == 1)
                {
                    return nums1[l1 / 2];
                }
                else
                {
                    return (nums1[l1 / 2] + nums1[l1 / 2 - 1]) / 2.0;
                }
            }
        }
        int left = 0, right = l1;
        int i, j;
        while (left <= right)
        {
            //Make sure i + j = (l1 - i) + (l2 - j) or i + j = (l1 - i) + (l2 - j) + 1
            i = (left + right) / 2;
            j = (l1 + l2 + 1) / 2 - i;


            if (i < l1 && nums1[i] < nums2[j - 1])
            {
                //i is too small and j is to large
                left = i + 1;
            }
            else if (i > 0 && nums1[i - 1] > nums2[j])
            {
                //j is too small and i is to large
                right = i - 1;
            }
            else
            {
                //Perfect 
                double maxInLeft, minInRight;
                if (i == 0)
                {
                    maxInLeft = nums2[j - 1];
                }
                else if (j == 0)
                {
                    maxInLeft = nums1[i - 1];
                }
                else
                {
                    maxInLeft = max(nums1[i - 1], nums2[j - 1]);
                }
                if (i == l1)
                {
                    minInRight = nums2[j];
                }
                else if (j == l2)
                {
                    minInRight = nums1[i];
                }
                else
                {
                    minInRight = min(nums1[i], nums2[j]);
                }
                if ((l1 + l2) % 2 == 1)
                {
                    return maxInLeft;
                }
                else
                {
                    return (maxInLeft + minInRight) / 2.0;
                }
            }
        }
        return 0;
    }
};
void Test()
{
    Solution solution;
    vector<int> nums1 = { 4 }, nums2 = { 1, 2, 3, 5, 6 };
    nums1.push_back(4);
    nums2.push_back(1);
    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(5);
    nums2.push_back(6);
    std::cout << Solution::findMedianSortedArrays(nums1, nums2);
    return;
}