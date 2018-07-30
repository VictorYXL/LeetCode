#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    auto res = Solution::generateMatrix(4);
    for (auto& line : res)
    {
        for (auto& num : line)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}