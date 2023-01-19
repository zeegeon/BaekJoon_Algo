#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, T;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;

	for (int p = 0; p < T; ++p)
	{
		int ans = 1;

		cin >> n;

		if (n == 0)
		{
			cout << 0 << '\n';
			continue;
		}

		vector<string> v;

		for (int i = 0; i < n; ++i)
		{
			string temp, temp2;

			cin >> temp >> temp2;
			v.push_back(temp2);
		}
		sort(v.begin(), v.end());

		int cnt = 1;

		for (int i = 1; i < v.size(); ++i)
		{
			if (v[i] != v[i - 1])
			{
				ans *= cnt+1;
				cnt = 1;
			}
			else
				++cnt;
		}
		cout << (ans*(cnt+1))-1 << '\n';
	}
	
	return 0;
}
