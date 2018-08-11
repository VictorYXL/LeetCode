#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int static maxArea(vector<int>& height)
    {
        int maxArea = 0, left = 0, right = height.size() - 1;
        int area, shorterLine;
        while (left <= right)
        {
            shorterLine = height[left] > height[right] ? height[right] : height[left];
            area = shorterLine * (right - left);
            if (area > maxArea)
            {
                maxArea = area;
            }
            if (height[left] > height[right])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
};
void Test()
{
    int heightArray[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    std::vector<int> height(heightArray, heightArray + 9);
    cout << Solution::maxArea(height) << endl;
    return;
}