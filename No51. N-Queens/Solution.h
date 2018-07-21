#pragma once
#include <vector>
using namespace std;
class Solution {
public:
    static vector<vector<string>> solveNQueens(int n);
private:
    static bool isValid(vector<string>& cur, int row, int col, int n);
    static void solveNQueens(vector<vector<string>>& res, int row, int n, vector<string>& cur);
};