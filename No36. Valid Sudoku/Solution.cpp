#include "Solution.h"
using namespace std;
bool Solution::judge(vector<char> str)
{
    bool visit[10];
    memset(visit, false, 10 * sizeof(bool));
    for (int i = 0; i < 9; i++)
    {
        if (str[i] != '.')
        {
            if (visit[str[i] - '0'] == true)
            {
                return false;
            }
            visit[str[i] - '0'] = true;
        }
    }
    return true;
}
bool Solution::isValidSudoku(vector<vector<char>>& board)
{
    vector<char> str;
    for (int i = 0; i < 9; i++)
    {
        if (Solution::judge(board[i]) == false)
        {
            return false;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        str.clear();
        for (int j = 0; j < 9; j++)
        {
            str.push_back(board[j][i]);
        }
        if (Solution::judge(str) == false)
        {
            return false;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            str.clear();
            for (int p = 0; p < 3; p++)
            {
                for (int q = 0; q < 3; q++)
                {
                    str.push_back(board[i * 3 + p][j * 3 + q]);
                }
            }
            if (Solution::judge(str) == false)
            {
                return false;
            }
        }
    }
    return true;
}
