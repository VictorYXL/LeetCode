#include <iostream>
#include "Solution.h"
#pragma warning(disable:4146)
using namespace std;
int main()
{
    //cout << Solution::divide(-4, 2) << endl;
    cout << Solution::divide(-2147483648, -1) << endl;
    cout << Solution::divide(-2147483648, 2) << endl;
	return 0;
}