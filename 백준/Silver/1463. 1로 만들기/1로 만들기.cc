#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int d[1000003];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, ans=0;
	cin >> a;

	d[1] = 0;
	
	for (int i = 2; i <= a; ++i)
	{
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0)
			d[i] = min(d[i], d[i / 2] + 1);
		if (i % 3 == 0)
			d[i] = min(d[i], d[i / 3] + 1);
	}
	
	cout << d[a];

	return 0;
}
