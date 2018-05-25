#include "Solution.h"
using namespace std;

int Solution::trap(vector<int>& height)
{
    int sum = 0;
    vector<int> left(height.size(), 0);
    vector<int> right(height.size(), 0);

    for (int i = 0; i < height.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (right[j] < height[i])
            {
                right[j] = height[i];
            }
        }
        for (int j = i + 1; j < height.size(); j++)
        {
            if (left[j] < height[i])
            {
                left[j] = height[i];
            }
        }
    }
    for (int i = 0; i < height.size(); i++)
    {
        sum += ((left[i] < right[i] ? left[i] : right[i]) - height[i]) < 0 ? 0 : ((left[i] < right[i] ? left[i] : right[i]) - height[i]);
    }
    return sum;
}
