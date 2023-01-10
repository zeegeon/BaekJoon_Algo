#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, a[21] = { 1,1,2,4 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 1; i < N; ++i) 
	{
		a[i + 1] = a[i] * 2;

		if (i >= 3 && i % 2 == 1) 
			a[i + 1] -= a[i - 3];
		if (i >= 4 && i % 2 == 1)
			a[i + 1] -= a[i - 4];
	}
	cout << a[N];

	return 0;
}
