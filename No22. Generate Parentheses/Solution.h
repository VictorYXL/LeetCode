#pragma once
#include <string>
#include <vector>
using namespace std;
class Solution 
{
public:
    vector<string> static generateParenthesis(int n);
private:
    vector<string> static subGenerateParenthesis(string curParenthesis, int n);
};