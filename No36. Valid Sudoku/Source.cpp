#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;
int main()
{
    vector<vector<char>> board;
    char charBoard[9][9]= 
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
	return 0;
}