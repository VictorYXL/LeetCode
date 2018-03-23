#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
	cout << Solution::myAtoi("1212") << endl;
	cout << Solution::myAtoi(" -1") << endl;
	cout << Solution::myAtoi("1212121212121211212122") << endl;
	cout << Solution::myAtoi(" -0012a42") << endl;
	cout << Solution::myAtoi("+1") << endl;
}