#include "Solution.h"
using namespace std;
int Solution::lengthOfLastWord(string s)
{
    int n = s.size() - 1, len = 0;
    while (n >= 0 && s[n] == ' ')
    {
        n--;
    }
    if (n < 0)
    {
        return 0;
    }
    while (n >= 0 && s[n] != ' ')
    {
        n--;
        len++;
    }
    return len;
}
