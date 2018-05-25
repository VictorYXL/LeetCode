#pragma once
#include <vector>
using namespace std;
class Solution {
public:
    static vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
    static vector<vector<int>> subCombinationSum(vector<int>& candidates, int target, int index);
};