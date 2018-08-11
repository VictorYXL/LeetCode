#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    static int totalNQueens(int n)
    {
        bool *col = new bool[n];
        bool *anti = new bool[2 * n - 1];
        bool *main = new bool[2 * n - 1];
        memset(col, true, n);
        memset(anti, true, 2 * n - 1);
        memset(main, true, 2 * n - 1);

        return solve(col, anti, main, 0, n);
    }
    static int solve(bool* col, bool* anti, bool* main, int i, int n);
    {
        int count = 0;
        if (i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (col[j] && anti[n - i + j - 1] && main[i + j])
                {
                    count++;
                }
            }
            return count;
        }
        for (int j = 0; j < n; j++)
        {
            if (col[j] && anti[n - i + j - 1] && main[i + j])
            {
                col[j] = anti[n - i + j - 1] = main[i + j] = false;
                count += solve(col, anti, main, i + 1, n);
                col[j] = anti[n - i + j - 1] = main[i + j] = true;
            }
        }
        return count;
    }
};
void Test()
{
    int res = Solution::totalNQueens(4);
    printf("%d\n", res);
    return;
}