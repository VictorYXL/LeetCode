#pragma once
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    static vector<int> findSubstring(string s, vector<string>& words)
    {
        map<string, int> count;
        map<string, int> curCount;
        vector<int> result;
        string curString;
        if (s.size() == 0 || words.size() == 0 || s.size() < words.size() * words[0].length())
        {
            return result;
        }
        int left, windowLeft, wordLength = words[0].length();
        bool flag;
        for (string word : words)
        {
            count[word]++;
        }
        for (left = 0; left < wordLength; left++)
        {
            windowLeft = left;
            while (windowLeft < s.length())
            {
                flag = true;
                curCount.clear();
                for (int i = 0; i < words.size(); i++)
                {
                    curString = s.substr(windowLeft + i * wordLength, wordLength);
                    if (count[curString] != 0)
                    {
                        curCount[curString]++;
                    }
                    else
                    {
                        flag = false;
                        windowLeft = windowLeft + wordLength;
                        break;
                    }
                }
                if (flag)
                {
                    flag = true;
                    for (string word : words)
                    {
                        if (count[word] != curCount[word])
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag)
                    {
                        result.push_back(windowLeft);
                    }
                    windowLeft = windowLeft + wordLength;
                }
            }
        }
        return result;
    }
};
void Test()
{
    Solution solution;
    string s = "wordgoodgoodgoodbestword";
    vector<string> words;
    words.push_back("word");
    words.push_back("good");
    words.push_back("best");
    words.push_back("good");
    vector<int> res = Solution::findSubstring(s, words);
    for (auto i = res.begin(); i != res.end(); i++)
    {
        cout << *i << endl;
    }
    return;
}