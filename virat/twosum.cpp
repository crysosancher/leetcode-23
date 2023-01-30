#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
	unordered_map<int, int> m;
	vector<int> v;
	for (int i = 0; i < nums.size(); i++)
	{
		if (m[nums[i]])
		{
			v.push_back(m[nums[i]]);
			v.push_back(i);
			break;
		}
		else
		{
			int key = target - nums[i];
			m[key] = i;
		}
	}
	return v;
}
int main()
{
	vector<int> v = {1, 3, 3, 9};
	int target = 6;
	vector<int> ans = twoSum(v, target);
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}