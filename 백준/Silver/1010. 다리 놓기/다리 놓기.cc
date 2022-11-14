#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		int a, b;
		unsigned long long ans = 1;

		cin >> a >> b;

		if (a > b / 2)
		{
			a = b - a;
		}

		if ((b - a) == 0)
			cout << ans << "\n";
		else
		{
			for (int i = b; i > (b - a); --i)
				ans *= i;
			for (int i = a; i > 1; --i)
				ans /= i;
			cout << ans << "\n";
		}
	}

	return 0;
}