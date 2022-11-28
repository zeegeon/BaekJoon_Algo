#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(9);
	int sum = 0;
	for (int i = 0;i < 9; ++i)
	{
		int temp;
		cin >> temp;
		sum += temp;
		v[i] = temp;
	}

	int a, b;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 1; j < 9; ++j)
		{
			if (i == j)
				continue;
			if (sum - v[i] - v[j] == 100)
			{
				a = i;
				b = j;
			}
		}
	}

	for (int i = 0; i < 9; ++i)
	{
		if (i == a || i == b)
			continue;

		cout << v[i] << '\n';
	}
	return 0;
}