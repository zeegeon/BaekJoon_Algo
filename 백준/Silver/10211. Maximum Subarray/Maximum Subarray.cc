#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, T;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;

	for (int p = 0; p < T; ++p)
	{
		int ans = -1000002;

		cin >> N;
		vector<int> v(N);
		vector<int> a(N);

		for (int i = 0; i < N; ++i)
		{
			int temp;
			cin >> temp;
			v[i] = temp;

			if (i > 0)
				a[i] = a[i - 1] + v[i];
			else if (i == 0)
				a[i] = v[i];
		}

		for (int i = 0; i < N; ++i)
		{
			for (int j = i; j < N; ++j)
			{
				if (i == 0)
				{
					if (a[j] > ans)
					{
						ans = a[j];
						continue;
					}
				}
				else
				{
					if (a[j] - a[i - 1] > ans)
						ans = a[j] - a[i - 1];
				}
				
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
