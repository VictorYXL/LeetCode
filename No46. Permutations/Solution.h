#pragma once
#include <vector>
using namespace std;
class Solution {
public:
    static vector<vector<int>> permute(vector<int>& nums);
    static vector<vector<int>> subPermute(vector<int>& nums, int index);
};