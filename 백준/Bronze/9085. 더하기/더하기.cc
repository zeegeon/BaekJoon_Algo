#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;

	for (int i = 0;i < T;i++)
	{
		int a;
		cin >> a;
		int sum = 0;

		for (int j = 0; j < a; j++)
		{
			int temp;
			cin >> temp;
			sum += temp;
		}
		cout << sum << "\n";
	}

	return 0;
}