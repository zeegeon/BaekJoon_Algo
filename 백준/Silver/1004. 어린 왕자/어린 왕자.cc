#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int T, n;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	
	while (T--)
	{
		int ans = 0;

		vector<pair<int, int>> v;

		int temp1, temp2, temp3;
		cin >> temp1 >> temp2;
		v.push_back({ temp1, temp2 }); // 출발
		cin >> temp1 >> temp2;
		v.push_back({ temp1, temp2 }); // 도착

		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> temp1 >> temp2 >> temp3;

			int a = sqrt((v[0].first - temp1) * (v[0].first - temp1) + (v[0].second - temp2) * (v[0].second - temp2));
			int b =	sqrt((v[1].first - temp1) * (v[1].first - temp1) + (v[1].second - temp2) * (v[1].second - temp2));

			if (temp3 > b && temp3 > a)
				continue;
			else if (temp3 < b && temp3 < a)
				continue;
			else if (temp3 > a || temp3 > b)
				++ans;
		}
		cout << ans << '\n';
	}

    return 0;
}
