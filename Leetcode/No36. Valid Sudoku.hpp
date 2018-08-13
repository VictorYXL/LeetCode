#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    static bool isValidSudoku(vector<vector<char>>& board)
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
    }
    static bool judge(vector<char>str)
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

        return true;
    }
};
void Test()
{
    Solution solution;
    vector<vector<char>> board;
    char charBoard[9][9] =
    {
        {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
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
    cout << Solution::isValidSudoku(board) << endl;
    return;
}