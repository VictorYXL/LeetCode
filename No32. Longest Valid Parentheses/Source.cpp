#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    //cout << Solution::longestValidParentheses(")") << endl;
    //cout << Solution::longestValidParentheses("()") << endl;
    cout << Solution::longestValidParentheses(")()") << endl;
    cout << Solution::longestValidParentheses(")()()") << endl;
    cout << Solution::longestValidParentheses(")()())") << endl;
    cout << Solution::longestValidParentheses("()(())") << endl;
    //cout << Solution::longestValidParentheses("((((((()))") << endl;
	return 0;
}