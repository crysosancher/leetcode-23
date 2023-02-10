//'.' Matches any single character.​​​​
//'*' Matches zero or more of the preceding element.
//s = "ab", p = ".*" Output: true
#include <bits/stdc++.h>
using namespace std;
bool isMatch(string s, string tar)
{
	bool c = true;
	// if(s.size()!=tar.size())
	// 	return false;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == tar[i]||tar[i]=='.'||tar[i]=='*'||s[i]=='*')
			continue;
		else
			c = false;
	}
	return c;
}
int main()
{
	cout << (isMatch("aaaa", "aaa"));
	return 0;
}