#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp(string a, string b)
{
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	return a < b;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n;
	while (cin >> n)
	{
		if (n == 0)
			break;

		vector <string> v;

		for (int i = 0; i < n; ++i)
		{
			string temp;
			cin >> temp;
			v.push_back(temp);
		}
		
		sort(v.begin(), v.end(), comp);
		cout << v[0] << '\n';
	}

	return 0;
}