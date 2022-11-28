#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	cin.ignore();

	for (int i = 0; i < T; ++i)
	{
		string a;
		getline(cin, a);

		if (a[0] >= 'a')
		{
			a[0] -= 32;
		}

		for (auto c : a)
			cout << c;
		cout << '\n';
	}
	return 0;
}