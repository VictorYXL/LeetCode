#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    string haystack = "hello", needle = "ll";
    cout << Solution::strStr(haystack, needle);
	return 0;
}