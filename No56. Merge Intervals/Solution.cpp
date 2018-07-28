#include "Solution.h"
#include <algorithm>
using namespace std;
bool func (Interval a, Interval b)
{
    return a.start < b.start;
}
vector<Interval> Solution::merge(vector<Interval>& intervals)
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
