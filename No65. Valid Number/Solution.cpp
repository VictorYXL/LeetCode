#include "Solution.h"

bool Solution::isNumber(string s)
{
    int i = 0;
    bool point = false, e = false;
    while (i < s.length() && s[i] == ' ')
    {
        i++;
    }
    if (i >= s.length())
    {
        return false;
    }
    if (s[i] == '+' || s[i] == '-')
    {
        i++;
    }
    while (i < s.length() && s[i] != ' ')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            i++;
        }
        else if (s[i] == '.')
        {
            if (point == false && ((i > 0 && s[i - 1] >= '0' && s[i - 1] <= '9') || (i + 1 < s.length() && s[i + 1] >= '0' && s[i + 1] <= '9')))
            {
                point = true;
                i++;
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == 'e')
        {
            if (e == false && (i > 0 && (s[i - 1] >= '0' && s[i - 1] <= '9' || s[i - 1] == '.')) && (i + 1 < s.length() && ((s[i + 1] >= '0' && s[i + 1] <= '9') || s[i + 1] == '.' || s[i + 1] == '+' || s[i + 1] == '-')))
            {
                if (s[i + 1] == '+' || s[i + 1] == '-')
                {
                    i++;
                }
                e = true;
                point = true;
                i++;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    while (i < s.length())
    {
        if (s[i] != ' ')
        {
            return false;
        }
        i++;
    }
    return true;
}
