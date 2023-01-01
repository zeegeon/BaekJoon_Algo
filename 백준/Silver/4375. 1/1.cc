#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	while (cin >> n)
	{
		long long s=1;
		int ans = 1;

		while (1)
		{
			if (s % n == 0)
			{
				cout << ans << '\n';
				break;
			}
			else
			{
				++ans;
				s = 10 * s + 1;
				s %= n;
			}
		}
	}

	return 0;
}
