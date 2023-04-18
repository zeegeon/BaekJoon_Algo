#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, M;
int board[9][9];
bool visit[9][9];
int virus, wall;
int ans;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };
vector<pair<int, int>> way; // 벽 좌표 후보


void reset()
{
	// 방문 초기화
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			visit[i][j] = false;
}

int BFS()
{
	reset();

	int cnt = virus; // 오염된 영역 크기

	queue<pair<int, int>> q;

	// 바이러스 좌표들 큐에 삽입
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			if (board[i][j] == 2) 
				q.push({ i,j });

	while (!q.empty())
	{
		int now_x = q.front().first;
		int now_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int next_x = now_x + dx[i];
			int next_y = now_y + dy[i];

			// 범위에서 벗어나면 pass
			if (next_x < 1 || next_x > N || next_y < 1 || next_y > M)
				continue;

			// 방문하지 않은 길이라면
			if (!visit[next_x][next_y] && board[next_x][next_y] == 0)
			{
				q.push(make_pair(next_x, next_y));
				visit[next_x][next_y] = true;
				cnt++;
			}
		}
	}

	// 전체크기 - (오염된 영역 + 벽 개수 + 3)
	return N * M - (cnt + wall + 3);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> board[i][j];

			if (board[i][j] == 0)
				way.push_back(make_pair(i,j));
			else if (board[i][j] == 1)
				wall++;
			else if (board[i][j] == 2)
				virus++;
		}
	}

	// 벽 3개 세우기 시뮬레이션
	for (int i = 0; i < way.size(); i++)
	{
		for (int j = i + 1; j < way.size(); j++)
		{
			for (int k = j + 1; k < way.size(); k++)
			{
				// 벽 세우기
				board[way[i].first][way[i].second] = 1;
				board[way[j].first][way[j].second] = 1;
				board[way[k].first][way[k].second] = 1;

				// 안전영역 최대크기 저장
				ans = max(ans, BFS());

				// 되돌려 놓기
				board[way[i].first][way[i].second] = 0;
				board[way[j].first][way[j].second] = 0;
				board[way[k].first][way[k].second] = 0;
			}
		}
	}

	cout << ans;
}