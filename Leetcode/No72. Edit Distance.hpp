#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static int minDistance(string word1, string word2)
    {
        int **dis = new int*[word1.size() + 1], min = 0;
        for (int i = 0; i <= word1.size(); i++)
        {
            dis[i] = new int[word2.size() + 1];
        }
        for (int i = 0; i <= word1.size(); i++)
        {
            dis[i][0] = i;
        }
        for (int i = 0; i <= word2.size(); i++)
        {
            dis[0][i] = i;
        }
        for (int i = 1; i <= word1.size(); i++)
        {
            for (int j = 1; j <= word2.size(); j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dis[i][j] = dis[i - 1][j - 1];
                }
                else
                {
                    min = dis[i - 1][j - 1];
                    min = dis[i - 1][j] < min ? dis[i - 1][j] : min;
                    min = dis[i][j - 1] < min ? dis[i][j - 1] : min;
                    dis[i][j] = min + 1;
                }
            }
        }
        return dis[word1.size()][word2.size()];
    }
};
void Test()
{
    Solution solution;
    cout << Solution::minDistance("horse", "ros") << endl;
    return;
}