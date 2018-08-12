#pragma once
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    static int strStr(string haystack, string needle)
    {
        if (needle.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack.substr(i, needle.size()) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};
void Test()
{
    string haystack = "hello", needle = "ll";
    cout << Solution::strStr(haystack, needle);
    return;
}