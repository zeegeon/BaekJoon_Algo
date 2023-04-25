#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

string x, y;
int ans = 0x7fffffff;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> x >> y;

	for (int j = 0; j <= y.size() - x.size(); ++j)
	{
		int tempans = 0;
		for (int i = 0; i < x.size(); ++i)
		{
			if (x[i] != y[i+j])
				++tempans;
		}
		ans = min(ans, tempans);
	}
	cout << ans;
}