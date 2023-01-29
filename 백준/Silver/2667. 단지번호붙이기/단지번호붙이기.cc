#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int N;
int house[26][26];
int visit[26][26];
int cnt;
int dan;

int posX[4] = {1, 0, -1, 0};
int posY[4] = {0, -1, 0, 1};

vector<int> v;

void DFS(int a, int b)
{
	visit[a][b] = 1;

	for (int i = 0; i < 4; ++i)
	{
		int x = a + posX[i];
		int y = b + posY[i];

		if (x < 0 || x >= N || y < 0 || y >= N)
			continue;

		if (visit[x][y] == 0 && house[x][y] == 1)
		{
			++dan;
			DFS(x, y);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	string a;

	for (int i = 0; i < N; ++i)
	{
		cin >> a;

		for (int j = 0; j < N; ++j)
			house[i][j] = a[j] - '0';
	}
	
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (house[i][j] == 1 && visit[i][j] == 0)
			{
				dan = 1;
				++cnt;
				DFS(i, j);
				v.push_back(dan);
			}
			
		}
	}
		
	cout << cnt << '\n';

	sort(v.begin(), v.end());

	for (auto c : v)
		cout << c << '\n';

	return 0;
}
