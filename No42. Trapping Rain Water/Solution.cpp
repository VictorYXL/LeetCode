#include "Solution.h"
using namespace std;

int Solution::trap(vector<int>& height)
{
    if (height.size() <= 1)
    {
        return 0;
    }
    int sum = 0;
    vector<int> left(height.size(), 0);
    vector<int> right(height.size(), 0);
    left[0] = height[0];
    right[height.size() - 1] = height[height.size() - 1];
    for (int i = 1; i < height.size(); i++)
    {
        left[i] = height[i] < left[i - 1] ? left[i - 1] : height[i];
    }
    for (int i = height.size() - 2; i >= 0; i--)
    {
        right[i] = height[i] < right[i + 1] ? right[i + 1] : height[i];
    }
    for (int i = 0; i < height.size(); i++)
    {
        sum += ((left[i] < right[i] ? left[i] : right[i]) - height[i]) < 0 ? 0 : ((left[i] < right[i] ? left[i] : right[i]) - height[i]);
    }
    return sum;
}
