#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 1; i < N; ++i)
	{
		for (int p = 1; p <= N - i; ++p)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; ++j)
		{
			if (j == 1 || j == i * 2 - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << '\n';
	}
	for (int i = 0; i < 2*N-1; ++i)
	{
		cout << "*";
	}
	return 0;
}