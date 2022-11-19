#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

long long a[100];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0;

	a[0] = 0; a[1] = 1;

	for (int i = 2; i < 100; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
	}

	cin >> n;

	cout << a[n];

	return 0;
}