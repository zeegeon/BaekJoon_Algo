#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int a, b;
		int cnt = 0;
		cin >> a >> b;

		for (int j = a; j <= b; ++j)
		{
			for (auto c : to_string(j))
			{
				if (c == '0')
					++cnt;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}