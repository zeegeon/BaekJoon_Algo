#include <bits/stdc++.h>
using namespace std;

int T, n;
int current_x, current_y, target_x, target_y;
int arr[301][301];
int visited[301][301];

int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[8] = { 2,1,-1,-2,-2,-1,1,2 };

queue<pair<int, int>> q;

void reset(int n) 
{
    while (!q.empty()) 
        q.pop();

    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= n; j++) 
        {
            visited[i][j] = 0;
            arr[i][j] = 0;
        }
    }
}

void bfs(int x, int y) 
{
    q.push(make_pair(x,y));

    visited[x][y] = true;

    while (!q.empty()) 
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        if (a == target_x && b == target_y) 
        {
            cout << arr[a][b] << "\n";
            return;
        }

        for (int i = 0; i < 8; i++) 
        {
            int na = a + dx[i];
            int nb = b + dy[i];

            if (0 <= na && 0 <= nb && na < n && nb < n && !visited[na][nb]) 
            {
                q.push(make_pair(na, nb));
                visited[na][nb] = true;
                arr[na][nb] = arr[a][b] + 1;
            }
        }
    }
}

int main(void) 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--)
    {
        cin >> n;
        cin >> current_x >> current_y;
        cin >> target_x >> target_y;

        bfs(current_x, current_y);
        reset(n);
    }

    return 0;
}