#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int N, M;

int board[102];
int visit[102];

void start(int x, int c) 
{
    queue<pair<int, int>> q;

    q.push(make_pair(x, c));

    while (!q.empty())
    {
        int loc = q.front().first;
        int cnt = q.front().second + 1; // 카운트
        q.pop();

        for (int i = 1; i <= 6;i++) 
        {
            int nx = loc + i;
            if (nx == 100) 
            {
                cout << cnt;
                return;
            }
            else if (nx < 100)
            {
                while (board[nx] != 0)
                    nx = board[nx];

                if (!visit[nx])
                {
                    q.push(make_pair(nx, cnt));
                    visit[nx] = 1;
                }
            }
        }
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	
	for (int i = 0; i < N; ++i)
	{
		int temp , temp2;
		cin >> temp >> temp2;
		board[temp] = temp2;
	}

	for (int i = 0; i < M; ++i)
	{
		int temp, temp2;
		cin >> temp >> temp2;
		board[temp] = temp2;
	}

    start(1, 0);

    return 0;
}
