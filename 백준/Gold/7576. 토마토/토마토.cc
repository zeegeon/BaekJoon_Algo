#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int M, N;
int tomato[1002][1002];

int posX[4] = {1,0,-1,0};
int posY[4] = {0,-1,0,1};

queue <pair<int, int>> qu;
int ans;

void BFS()
{
	while (!qu.empty())
	{
		int x = qu.front().second;
		int y = qu.front().first;
		qu.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + posX[i];
			int ny = y + posY[i];

			if (nx < 0 || nx >= M || ny < 0 || ny >= N)
				continue;

			if (tomato[ny][nx] == -1)
				continue;

			if (tomato[ny][nx] == 0)
			{
				tomato[ny][nx] = tomato[y][x] + 1;
				qu.push({ ny, nx });
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> tomato[i][j];
			if (tomato[i][j] == 1)
				qu.push({ i,j });
		}
	}

	BFS();
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			ans = max(ans, tomato[i][j] - 1);
			if (tomato[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
		}
	}
	cout << ans;

    return 0;
}
