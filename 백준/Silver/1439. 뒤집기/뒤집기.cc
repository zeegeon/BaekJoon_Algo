#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string a;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a;

	int ans = 0;

	for (int i = 0;i < a.length();i++)
		if (a[i] != a[i + 1])
			++ans;

	if (ans != 0)
		cout << ans / 2;
	else
		cout << ans;
	return 0;
}