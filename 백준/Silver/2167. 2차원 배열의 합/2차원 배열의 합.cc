#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, M, K;
int v[303][303];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> M;

	int pr = 0;
	for (int i = 1; i <= N; ++i)
		for (int j = 1; j <= M; ++j)
			cin >> v[i][j];

	cin >> K;

	for (int z = 0; z < K; ++z)
	{
		int i, j, x, y, ans =0;
		cin >> i >> j >> x >> y;

		for (int a = i; a <= x; ++a)
		{
			for (int b = j; b <= y; ++b)
			{
				ans += v[a][b];
			}
		}
		cout << ans << '\n';
	}

	return 0;
}