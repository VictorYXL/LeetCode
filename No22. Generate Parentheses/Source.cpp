#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    vector<string> result = Solution::generateParenthesis(3);
    for (auto p = result.begin(); p != result.end(); p++)
    {
        cout << *p << endl;
    }
	return 0;
}