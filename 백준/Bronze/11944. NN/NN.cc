#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string ans = "";

	int a,b, cnt = 0;
	cin >> a >> b;

	if (to_string(a).length() * a > b)
	{
		for (int i = 0;i < a;++i)
		{
			ans += to_string(a);
		}
		for (int i = 0; i < b; ++i)
			cout << ans[i];
	} 
	else
	{
		for (int i = 0; i < a; ++i)
			cout << a;
	}

	return 0;
}