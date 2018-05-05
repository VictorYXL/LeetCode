#include "Solution.h"
int Solution::strStr(string haystack, string needle)
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
