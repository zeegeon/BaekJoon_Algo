#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int map[103][103];

int n, ans, cnt;
stack<int> st;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	vector<int> v(n+1);

	cin >> cnt;

	for (int i = 0; i < cnt; ++i)
	{
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}

	v[1] = 1;
	st.push(1);

	while (!st.empty())
	{
		int temp = st.top();
		st.pop();

		for (int i = 1; i <= n; ++i)
		{
			if (map[temp][i] == 1)
			{
				if (v[i] != 1)
				{
					++ans;
					v[i] = 1;
					st.push(i);
				}
			}
		}
	}

	cout << ans;

	return 0;
}