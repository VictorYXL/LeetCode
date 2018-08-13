#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool exist(vector<vector<char>>& board, int x, int y, string word, int begin)
    {
        if (begin >= word.size())
        {
            return true;
        }
        if (x > 0 && board[y][x - 1] == word[begin])
        {
            board[y][x - 1] = 0;
            if (exist(board, x - 1, y, word, begin + 1))
            {
                board[y][x - 1] = word[begin];
                return true;
            }
            else
            {
                board[y][x - 1] = word[begin];
            }
        }
        if (x < board[0].size() - 1 && board[y][x + 1] == word[begin])
        {
            board[y][x + 1] = 0;
            if (exist(board, x + 1, y, word, begin + 1))
            {
                board[y][x + 1] = word[begin];
                return true;
            }
            else
            {
                board[y][x + 1] = word[begin];
            }
        }
        if (y > 0 && board[y - 1][x] == word[begin])
        {
            board[y - 1][x] = 0;
            if (exist(board, x, y - 1, word, begin + 1))
            {
                board[y - 1][x] = word[begin];
                return true;
            }
            else
            {
                board[y - 1][x] = word[begin];
            }
        }
        if (y < board.size() - 1 && board[y + 1][x] == word[begin])
        {
            board[y + 1][x] = 0;
            if (exist(board, x, y + 1, word, begin + 1))
            {
                board[y + 1][x] = word[begin];
                return true;
            }
            else
            {
                board[y + 1][x] = word[begin];
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word)
    {
        if (word.size() <= 0 || board.size() <= 0 || board[0].size() <= 0)
        {
            return false;
        }
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == word[0])
                {
                    board[i][j] = 0;
                    if (exist(board, j, i, word, 1))
                    {
                        board[i][j] = word[0];
                        return true;
                    }
                    else
                    {
                        board[i][j] = word[0];
                    }
                }
            }
        }

        return false;
    }
};
void Test()
{
    Solution solution;
    vector<vector<char>> board = { { 'A', 'B', 'C', 'E'}, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
    cout << solution.exist(board, "ABCCED");
    return;
}