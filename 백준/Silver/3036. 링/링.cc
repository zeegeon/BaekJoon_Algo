#include <bits/stdc++.h>
using namespace std;

int N;

int GCD(int x, int y)
{
	int maxx = 0;
	
	for (int i = 1; i <= max(x, y); ++i)
	{
		if ((x % i) == 0 && (y % i) == 0)
			maxx = i;
	}

	return maxx;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	int mot;
	cin >> mot;

	for (int i = 1; i < N; ++i)
	{
		int temp , a;
		cin >> temp;

		a = GCD(mot, temp);

		cout << mot / a << '/' << temp / a << '\n';
	}

    return 0;
}
