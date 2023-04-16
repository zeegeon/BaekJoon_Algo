#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int T;
int board[51][51];
int visit[51][51];
int dirX[4] = { 1,0,-1,0 };
int dirY[4] = { 0,-1,0,1 };

void reset()
{
	for (int i = 0; i < 51; ++i)
	{
		for (int j = 0; j < 51; ++j)
		{
			board[i][j] = 0;
			visit[i][j] = 0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int>> qu;

	cin >> T;
	
	for (int p = 0; p < T; ++p)
	{
		int M, N, K, ans=0;
		cin >> M >> N >> K;

		for (int i = 0; i < K; ++i)
		{
			int temp1, temp2;
			cin >> temp1 >> temp2;
			board[temp1][temp2] = 1;
		}

		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				if (board[j][i] == 1 && visit[j][i] == 0)
				{
					++ans;
					visit[j][i] = ans;

					qu.push(make_pair(j,i));
					while (!qu.empty())
					{
						int X = qu.front().first;
						int Y = qu.front().second;
						qu.pop();
						
						for (int q = 0; q < 4; ++q)
						{
							int newX = X + dirX[q];
							int newY = Y + dirY[q];
							if (newX < 0 || newY < 0 || newX >= M || newY >= N || visit[newX][newY] > 0 || board[newX][newY] ==0)
							{
								continue;
							}
							
							qu.push(make_pair(newX, newY));
							visit[newX][newY] = ans;
						}
					}
				}
			}
		}

		cout << ans << '\n';
		reset();
	}
}