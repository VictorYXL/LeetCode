#include <iostream>
#include "Solution.h"
#pragma warning(disable:4146)
using namespace std;
int main()
{
    string s = "wordgoodgoodgoodbestword";
    vector<string> words;
    words.push_back("word");
    words.push_back("good");
    words.push_back("best");
    words.push_back("good");
    vector<int> res = Solution::findSubstring(s, words);
    for (auto i = res.begin(); i != res.end(); i++)
    {
        cout << *i << endl;
    }
	return 0;
}