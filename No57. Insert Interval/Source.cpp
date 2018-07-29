#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    //vector<Interval> intervals = { { 1, 3 } , { 2, 6 }, { 8, 10 }, { 15, 18} };
    //vector<Interval> intervals = { { 2, 6 } ,{ 8, 10 }, { 1, 3 },{ 15, 18 } };
    vector<Interval> intervals = { {1, 2}, { 3, 5 }, { 6, 7 }, { 8, 10 }, { 12, 16 } };
    auto res = Solution::insert(intervals, { 4, 8});
    for (auto& interval : res)
    {
        cout << interval.start << ", " << interval.end << endl;
    }
    
    return 0;
}