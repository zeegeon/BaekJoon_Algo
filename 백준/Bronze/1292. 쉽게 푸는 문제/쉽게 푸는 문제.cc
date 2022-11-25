#include <iostream>
#include <algorithm>
using namespace std;

int ans, index=1;
int a[1003];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i < 100; ++i)
	{
		if (index > 1000)
			break;
		for (int j = 0; j < i; j++)
		{
			if (index > 1000)
				break;
			a[index] = i;
			++index;
		}
	}
	
	int c, b;
	cin >> c >> b;

	for (int i = c; i <= b; ++i)
	{
		ans += a[i];
	}

	cout << ans;

	return 0;
}