#include "Solution.h"
using namespace std;
vector<Interval> Solution::insert(vector<Interval>& intervals, Interval newInterval)
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
