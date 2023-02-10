#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
	unordered_map<int, int> m;
	vector<int> v;
	for (int i = 0; i < nums.size(); i++)
	{
		if (m.count(nums[i]) > 0)
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

	return 0;
}
