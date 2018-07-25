#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    int numArray[] = { 1, 2, 3 };
    vector<vector<int>> nums{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    vector<int> resVec = Solution::spiralOrder(nums);
    for (auto& res : resVec)
    {
        cout << res << " ";
    }
    return 0;
}