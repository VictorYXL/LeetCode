#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
	cout << Solution::longestPalindrome("a") << endl;
	cout << Solution::longestPalindrome("ababa") << endl;
	cout << Solution::longestPalindrome("aaaa") << endl;
	cout << Solution::longestPalindrome("1aa1") << endl;
	cout << Solution::longestPalindrome("1aaf") << endl;
}