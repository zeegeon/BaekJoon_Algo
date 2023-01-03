#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, ans = 1;
int a[103];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		int x, y;
		cin >> x >> y;

		for (int j = x; j < y; ++j)
		{
			a[j] = 1;
		}
	}

	for (int i = 1; i < N; ++i)
	{
		if (a[i] == 0)
			++ans;
		else if (a[i] == 1)
			continue;
	}
	cout << ans;

	return 0;
}
/*
	1 2 3 4 5 // room
	 0 0 0 0 // wall
	 1 2 3 4 // index
*/
