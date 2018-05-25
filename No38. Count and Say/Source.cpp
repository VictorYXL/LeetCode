#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << Solution::countAndSay(i) << endl;
    }
	return 0;
}