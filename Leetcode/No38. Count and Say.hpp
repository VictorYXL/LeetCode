#pragma once
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    static string countAndSay(int n)
    {
        string str[2];
        int index, count;
        char preKey;
        str[0] = "1";
        for (index = 0; index < n - 1; index++)
        {
            str[index % 2].append("a");
            str[(index + 1) % 2].clear();
            preKey = str[index % 2][0];
            count = 1;
            for (int j = 1; j < str[index % 2].size(); j++)
            {
                if (str[index % 2][j] == preKey)
                {
                    count++;
                }
                else
                {
                    str[(index + 1) % 2].append(to_string(count));
                    str[(index + 1) % 2].push_back(preKey);
                    preKey = str[index % 2][j];
                    count = 1;
                }
            }
        }
        return str[index % 2];
    }
};
void Test()
{
    Solution solution;
    for (int i = 0; i < 10; i++)
    {
        cout << Solution::countAndSay(i) << endl;
    }
    return;
}