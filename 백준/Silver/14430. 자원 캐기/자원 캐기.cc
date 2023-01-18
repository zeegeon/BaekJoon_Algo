#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, M;

int a[302][302];
int b[302][302];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> a[i][j];

	b[0][0] = a[0][0];
	for (int i = 1; i < M; ++i)
		b[0][i] = a[0][i] + b[0][i-1];


	for (int i = 1; i < N; ++i)
		for (int j = 0; j < M; ++j)
		{
			if (j == 0)
			{
				b[i][j] = b[i-1][j] + a[i][j];
			}
			else
			{
				b[i][j] = max(b[i - 1][j], b[i][j-1]) + a[i][j];
			}
		}

	cout << b[N - 1][M - 1];

	return 0;
}
