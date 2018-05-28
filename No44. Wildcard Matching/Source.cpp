#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
    cout << Solution::isMatch("adceb", "*a*b") << endl;
    cout << Solution::isMatch("babbbbaabababaabbababaababaabbaabababbaaababbababaaaaaabbabaaaabababbabbababbbaaaababbbabbbbbbbbbbaabbb", "b**bb**a**bba*b**a*bbb**aba***babbb*aa****aabb*bbb***a") << endl;
    cout << Solution::isMatch("babbbbaabababaabbababaababaabbaabababbaaababbababaaaaaabbabaaaabababbabbababbbaaaababbbabbbbbbbbbbaabbb", "b**bb**a**bba*b**a*bbb**aba***babbb*aa****aabb*bbb***a") << endl;
    cout << Solution::isMatch("aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba", "a*******b") << endl;
    cout << Solution::isMatch("acdcb", "a*c?b") << endl;
    cout << Solution::isMatch("cb", "?a") << endl;
    cout << Solution::isMatch("abcde", "*") << endl;
    cout << Solution::isMatch("1", "") << endl;
    cout << Solution::isMatch("aa", "*") << endl;
    return 0;
}