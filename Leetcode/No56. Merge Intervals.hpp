#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
bool func(Interval a, Interval b)
{
    return a.start < b.start;
}
class Solution
{
public:
    static vector<Interval> merge(vector<Interval>& intervals)
    {
        vector<Interval> res;
        std::sort(intervals.begin(), intervals.end(), func);
        for (int i = 0; i < intervals.size(); i++)
        {
            Interval tmp;
            int end = intervals[i].end;
            tmp.start = intervals[i].start;
            while (i + 1 < intervals.size() && end >= intervals[i + 1].start)
            {
                i++;
                end = end > intervals[i].end ? end : intervals[i].end;;
            }
            tmp.end = end;
            res.push_back(tmp);
        }
        return res;
    }
};
void Test()
{
    vector<Interval> intervals = { {2,3 }, { 4,5 }, { 6,7 }, { 8,9 }, { 1,10 } };
    auto res = Solution::merge(intervals);
    for (auto& interval : res)
    {
        cout << interval.start << ", " << interval.end << endl;
    }

    return;
}