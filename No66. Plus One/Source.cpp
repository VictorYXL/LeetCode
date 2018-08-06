#include <iostream>
#include "Solution.h"
int main()
{
    vector<int> num = { 1, 2, 3 };
    num = Solution::plusOne(num);
    for (auto p : num)
    {

        std::cout << p << " ";
    }
    return 0;
}