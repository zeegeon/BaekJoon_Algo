#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

set <string> mp;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;

	cin >> a;

	for (int i = 1; i <= a.size(); ++i) // 길이
	{
		for (int j = 0; j < a.size(); ++j) // index
		{
			if (i + j > a.size())
				break;

			string temp = a.substr(j, i);
			mp.insert(temp);
		}
	}

	cout << mp.size();

	return 0;
}