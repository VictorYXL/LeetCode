#pragma once
#include<vector>
using namespace std;
class Solution {
public:
    static bool isValidSudoku(vector<vector<char>>& board);
    static bool judge(vector<char>str);
};