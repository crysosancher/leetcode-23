#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
	int total = 0;
	map<char, int> Roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
	for (int i = 0; i < s.length(); i++)
	{
		if (Roman[s[i]] >= Roman[s[i + 1]])
		{
			total = total + Roman[s[i]];
		}
		else
		{
			total = total - Roman[s[i]];
		}
	}
	return total;
}
int main(){
	string s="MCMXCIV";
	cout<<romanToInt(s);
	return 0;
}