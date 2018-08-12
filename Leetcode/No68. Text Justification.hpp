#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static vector<string> fullJustify(vector<string>& words, int maxWidth)
    {
        int begin = 0, length = 0, end = 0;
        vector<string> res;
        while (begin < words.size())
        {
            string s;
            length = words[begin].size();
            end = begin + 1;
            while (end < words.size() && length + words[end].size() + 1 <= maxWidth)
            {
                length += words[end].size() + 1;
                end++;
            }
            if (end < words.size() && end - begin != 1)
            {
                int left = maxWidth - length;
                int tri = end - begin - 1;
                s += words[begin];
                for (int i = begin + 1; i < end; i++)
                {
                    int r = 1 + left / tri + ((i - begin) <= (left % tri));
                    for (int p = 0; p < r; p++)
                    {
                        s += ' ';
                    }
                    s += words[i];
                }
            }
            else
            {
                for (int i = begin; i < end; i++)
                {
                    s += words[i];
                    if (s.size() + 1 <= maxWidth)
                    {
                        s += ' ';
                    }
                }
                for (int i = s.size(); i < maxWidth; i++)
                {
                    s += ' ';
                }
            }
            begin = end;
            res.push_back(s);
        }
        return res;
    }
};
void Test()
{
    vector<string> words = { "Science", "is", "what", "we", "understand", "well", "enough", "to", "explain",
        "to", "a", "computer.", "Art", "is", "everything", "else", "we", "do" };
    vector<string> res = Solution::fullJustify(words, 20);
    for (auto& r : res)
    {
        std::cout << r.c_str() << std::endl;
    }
    return;
}