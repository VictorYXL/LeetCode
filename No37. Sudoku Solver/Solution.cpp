#include "Solution.h"
using namespace std;

bool Solution::simulateSingle(vector<vector<char>>& board, int i, int j)
{
    bool possibleValue[10];
    int index;
    for (index = i * 9 + j; index <= 80; index++)
    {
        if (board[index / 9][index % 9] == '.')
        {
            i = index / 9;
            j = index % 9;
            break;
        }
    }
    if (index > 80)
    {
        return true;
    }
    memset(possibleValue, true, 10 * sizeof(bool));
    for (int k = 0; k < 9; k++)
    {
        if (board[k][j] != '.')
        {
            possibleValue[board[k][j] - '0'] = false;
        }
    }
    for (int k = 0; k < 9; k++)
    {
        if (board[i][k] != '.')
        {
            possibleValue[board[i][k] - '0'] = false;
        }
    }
    for (int p = i / 3 * 3; p < (i / 3 + 1) * 3; p++)
    {
        for (int q = j / 3 * 3; q < (j / 3 + 1) * 3; q++)
        {
            if (board[p][q] != '.')
            {
                possibleValue[board[p][q] - '0'] = false;
            }
        }
    }

    for (int k = 1; k <= 9; k++)
    {
        if (possibleValue[k] == true)
        {
            board[i][j] = k + '0';
            int j1 = j + 1;
            int i1 = j1 / 9;
            j1 %= 9;
            if (Solution::simulateSingle(board, i1, j1))
            {
                return true;
            }
        }
    }
    board[i][j] = '.';
    return false;
}

void Solution::solveSudoku(vector<vector<char>>& board)
{
    Solution::simulateSingle(board, 0, 0);

}
