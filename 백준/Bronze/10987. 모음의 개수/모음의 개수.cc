#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	cin >> a;
	int ans =0;

	for (auto c : a)
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			++ans;
	}
	cout << ans;

	return 0;
}