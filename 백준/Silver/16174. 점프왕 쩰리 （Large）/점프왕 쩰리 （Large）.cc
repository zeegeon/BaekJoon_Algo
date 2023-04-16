#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

queue <pair<int, int>> qu;
int N;
int v[65][65];
int isvisit[65][65];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N;++i)
		for (int j = 0;j < N; ++j)
			cin >> v[i][j];

	int start = v[0][0];
	int x = 0, y = 0;

	isvisit[0][0] = 1;
	qu.push(make_pair(x, y));

	while (!qu.empty())
	{
		x = qu.front().first;
		y = qu.front().second;
		start = v[x][y];
		qu.pop();

		if (((x + start == N - 1) && (y == N - 1)) || ((x == N - 1) && (y + start == N - 1)))
		{
			cout << "HaruHaru";
			return 0;
		}
		else
		{
			if (x + start < N && isvisit[x + start][y] != 1)
			{
				qu.push(make_pair(x + start, y));
				isvisit[x + start][y] = 1;
			}
			if (y + start < N && isvisit[x][y + start] != 1)
			{
				qu.push(make_pair(x, y + start));
				isvisit[x][y + start] = 1;
			}
		}
	}

	cout << "Hing";

	return 0;
}