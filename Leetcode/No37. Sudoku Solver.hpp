#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    static bool simulateSingle(vector<vector<char>>& board, int i, int j)
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
    static void solveSudoku(vector<vector<char>>& board)
    {
        Solution::simulateSingle(board, 0, 0);
    }
};
void Test()
{
    Solution solution;
    vector<vector<char>> board;
    char charBoard[9][9] =

    {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    {
        { '5', '3', '4', '6', '7', '8', '9', '1', '2' },
        { '6', '7', '2', '1', '9', '5', '3', '4', '8' },
        { '1', '9', '8', '3', '4', '2', '5', '6', '7' },
        { '8', '5', '9', '7', '6', '1', '4', '2', '3' },
        { '4', '2', '6', '8', '5', '3', '7', '9', '1' },
        { '7', '1', '3', '9', '2', '4', '8', '5', '6' },
        { '9', '6', '1', '5', '3', '7', '2', '8', '4' },
        { '2', '8', '7', '4', '1', '9', '6', '3', '5' },
        { '3', '4', '5', '2', '8', '6', '1', '7', '9' }
    };
        for (int i = 0; i < 9; i++)
        {
            vector<char> t;
            for (int j = 0; j < 9; j++)
            {
                t.push_back(charBoard[i][j]);
            }
            board.push_back(t);
        }
    Solution::solveSudoku(board);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return;
}