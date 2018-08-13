#pragma once
#include <iostream>
#include <vector>
using namespace std;
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
class Solution
{
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval)
    {
        vector<Interval> res;
        if (intervals.size() <= 0)
        {
            res.push_back(newInterval);
            return res;
        }
        int i = 0;
        while (i < intervals.size() && intervals[i].end < newInterval.start)
        {
            res.push_back(intervals[i]);
            i++;
        }
        if (i >= intervals.size())
        {
            res.push_back(newInterval);
            return res;
        }
        int from = intervals[i].start < newInterval.start ? intervals[i].start : newInterval.start;
        int end = newInterval.end;
        while (i < intervals.size() && intervals[i].start <= end)
        {
            end = intervals[i].end > end ? intervals[i].end : end;
            i++;
        }
        res.push_back({ from, end });
        while (i < intervals.size())
        {
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};
void Test()
{
    Solution solution;
    vector<Interval> intervals = { {1, 2}, { 3, 5 }, { 6, 7 }, { 8, 10 }, { 12, 16 } };
    auto res = solution.insert(intervals, { 4, 8 });
    for (auto& interval : res)
    {
        cout << interval.start << ", " << interval.end << endl;
    }

    return;
}