#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	vector<int> ans(n);
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		ans[i] = v[i];
	}

	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());

	for (auto c : ans)
	{
		cout << lower_bound(v.begin(), v.end(), c) - v.begin() << ' ';
	}

	return 0;
}