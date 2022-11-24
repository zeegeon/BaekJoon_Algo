#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int a;
		cin >> a;

		string b;
		cin >> b;

		string ans = "";

		for (int j = 0; j < b.length(); j++)
		{
			if(j != a-1)
				ans += b[j];
		}
		cout << ans << "\n";
	}

	return 0;
}