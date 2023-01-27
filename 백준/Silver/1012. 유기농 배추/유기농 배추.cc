#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

stack <pair<int, int>> st;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		int M, N, K, ans = 0;
		cin >> M >> N >> K;

		int map[52][52] = {0,};
		int visit[52][52] = {0,};

		for (int i = 0; i < K; ++i)
		{
			int a, b;
			cin >> a >> b;
			map[a][b] = 1;
		}
		

		for (int i = 0; i < M; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (map[i][j] == 0 || visit[i][j] == 1)
					continue;
				else
				{
					++ans;
					visit[i][j] = 1;
					st.push(make_pair(i, j));

					while (!st.empty())
					{
						int x = st.top().first;
						int y = st.top().second;
						st.pop();
						
						if (map[x+1][y] == 1 && x+1 < M && visit[x + 1][y] != 1)
						{
							map[x + 1][y] = 1;
							st.push(make_pair(x+1, y));
							visit[x + 1][y] = 1;
						}
						if (map[x-1][y] == 1 && x - 1 > -1 && visit[x - 1][y] != 1)
						{
							map[x - 1][y] = 1;
							st.push(make_pair(x-1, y));
							visit[x - 1][y] = 1;
						}
						if (map[x][y+1] == 1 && y + 1 < N && visit[x][y+1] != 1)
						{
							map[x][y + 1] = 1;
							st.push(make_pair(x, y+1));
							visit[x][y + 1] = 1;
						}
						if (map[x][y-1] == 1 && y - 1 > -1 && visit[x][y-1] != 1)
						{
							map[x][y - 1] = 1;
							st.push(make_pair(x, y-1));
							visit[x][y - 1] = 1;
						}
					}
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}