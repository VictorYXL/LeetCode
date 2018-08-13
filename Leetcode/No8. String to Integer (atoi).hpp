#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    int myAtoi(string str)
    {
        int number = 0, cur = 0, sign = 1;
        while (str[cur] == ' ')
        {
            cur++;
        }
        if (str[cur] == '-')
        {
            sign = -1;
            cur++;
        }
        else if (str[cur] == '+')
        {
            cur++;
        }

        while (str[cur] >= '0' && str[cur] <= '9')
        {
            if (number > INT_MAX / 10 || (number == INT_MAX / 10 && str[cur] - '0' > INT_MAX % 10))
            {
                if (sign == 1)
                {
                    return INT_MAX;
                }
                else
                {
                    return INT_MIN;
                }
            }
            number = number * 10 + str[cur] - '0';
            cur++;
        }
        return number * sign;
    }
};
void Test()
{
    Solution solution;
    cout << solution.myAtoi("1212") << endl;
    cout << solution.myAtoi(" -1") << endl;
    cout << solution.myAtoi("1212121212121211212122") << endl;
    cout << solution.myAtoi(" -0012a42") << endl;
    cout << solution.myAtoi("+1") << endl;
    return;
}