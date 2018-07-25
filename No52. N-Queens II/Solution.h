#pragma once
#include <vector>
using namespace std;
class Solution {
public:
    static int totalNQueens(int n);
    static int solve(bool* col, bool* anti, bool* main, int i, int n);
private:
};