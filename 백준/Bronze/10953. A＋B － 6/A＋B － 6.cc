#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		string a;
		cin >> a;

		string temp;
		int cnt =0;
		for (auto c : a)
		{
			if (c == ',')
				break;
			++cnt;
		}

		temp = a.substr(0, cnt);
		a = a.substr(cnt+1, a.length());

		cout << stoi(temp) + stoi(a) << "\n";
	}

	return 0;
}