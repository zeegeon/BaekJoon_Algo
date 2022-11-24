#include <iostream>
using namespace std;

int a[101];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, ans=0;
	int b=0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (a[i])
		{
			ans += 1 + b;
			++b;
		}
		else
			b = 0;
	}
	cout << ans;

	return 0;
}