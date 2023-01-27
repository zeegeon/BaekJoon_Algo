#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int val;
int line[1002][1002];
stack<int> st;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int> pt(N+1);

	for (int i = 0; i < M; ++i)
	{
		int a, b;
		cin >> a >> b;

		line[a][b] = 1;
		line[b][a] = 1;
	}

	for (int i = 1; i <= N; ++i)
	{
		if (pt[i] != 0)
			continue;
		st.push(i);
		pt[i] = 1;

		while (!st.empty())
		{
			int temp = st.top();
			st.pop();

			for (int j = 1; j <= N; ++j)
			{
				if (line[temp][j] == 1 && pt[j] == 0)
				{
					st.push(j);
					pt[j] = 1;
				}
			}
		}
		++val;
	}

	cout << val;

	return 0;
}