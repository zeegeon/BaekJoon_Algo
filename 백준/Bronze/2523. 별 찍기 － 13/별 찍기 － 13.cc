#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int N;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;

	for (int i = 1; i < N; ++i)
	{
		for (int a = 0; a < i; ++a)
		{
			cout << "*";
		}
		
		cout << "\n";
	}

	for (int i = 0; i < N; ++i)
	{
		cout << "*";
	}
	cout << "\n";

	for (int i = 1; i < N; ++i)
	{
		for (int a = N - i; a > 0; --a)
		{
			cout << "*";
		}
		
		cout << '\n';
	}

	return 0;
}