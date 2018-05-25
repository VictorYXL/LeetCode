#include <algorithm>
#include "Solution.h"
using namespace std;

vector<vector<int>> Solution::combinationSum(vector<int>& candidates, int target)
{
    if (target == 0)
    {
        return vector<vector<int>>();
    }
    sort(candidates.begin(), candidates.end());
    return subCombinationSum(candidates, target, 0);

}
vector<vector<int>> Solution::subCombinationSum(vector<int>& candidates, int target, int index)
{
    vector<vector<int>> res;
    if (candidates.size() <= index || candidates[index] > target)
    {
        if (target == 0)
        {
            res.push_back(vector<int>());
        }
        return res;
    }
    vector<vector<int>> t;
    t = subCombinationSum(candidates, target - candidates[index], index);
    for (auto p = t.begin(); p != t.end(); p++)
    {
        p->insert(p->begin(), candidates[index]);
    }
    res.insert(res.begin(), t.begin(), t.end());
    
    t = subCombinationSum(candidates, target, index + 1);
    res.insert(res.begin(), t.begin(), t.end());
    return res;
}
