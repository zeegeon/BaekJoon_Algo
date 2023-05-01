#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
using namespace std;

map <string, int> mp;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string temp;
		cin >> temp;

		if (mp.count(temp))
			mp[temp]++;
		else 
			mp.insert({ temp, 1 });
	}

	int max = 0;
	string ans;

	for (auto c : mp)
		if (c.second > max) 
		{
			ans = c.first;
			max = c.second;
		}

	cout << ans;
}