#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static string simplifyPath(string path)
    {
        string res, substr;
        vector<string> strList;
        int begin = 1, end = 1;
        if (path[0] != '/')
        {
            return res;
        }
        while (end < path.size())
        {
            end = begin;
            while (end < path.size() && path[end] != '/')
            {
                end++;
            }
            substr = path.substr(begin, end - begin);
            begin = end + 1;
            if (substr == "." || substr == "")
            {
                continue;
            }
            else if (substr == "..")
            {
                if (strList.size() > 0)
                {
                    strList.erase(strList.end() - 1);
                }
            }
            else
            {
                strList.push_back(substr);
            }
        }
        for (auto& str : strList)
        {
            res = res + "/" + str;
        }
        if (res == "")
        {
            return "/";
        }
        return res;
    }
};
void Test()
{
    cout << Solution::simplifyPath("/./").c_str() << endl;
    cout << Solution::simplifyPath("/../").c_str() << endl;
    cout << Solution::simplifyPath("/home/").c_str() << endl;
    cout << Solution::simplifyPath("/a/./b/../../c/").c_str() << endl;
    cout << Solution::simplifyPath("/home//foo/").c_str() << endl;
    return;
}