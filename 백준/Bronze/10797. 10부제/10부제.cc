#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;

	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		if (n == temp)
			++cnt;
	}
	cout << cnt;

	return 0;
}