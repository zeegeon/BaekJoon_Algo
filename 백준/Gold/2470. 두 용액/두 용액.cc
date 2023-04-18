#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N; // 완탐, 시간초과
int ansMin = 0x7fffffff;
int ans[2];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	vector<int> v(N);

	for (auto& c : v)
		cin >> c;

	sort(v.begin(), v.end());

	int ptA = 0;
	int ptB = v.size()-1;

	while (ptA < ptB)
	{
		int sumVal = v[ptA] + v[ptB];

		// 합이 0보다 크면 더 작은 값으로 놓고 비교해도 된다.
		if (sumVal > 0)
		{
			if (ansMin > abs(sumVal))
			{
				ansMin = abs(sumVal);
				ans[0] = v[ptA];
				ans[1] = v[ptB];
			}
			ptB--;
		}
		else if (sumVal < 0)
		{
			if (ansMin > abs(sumVal))
			{
				ansMin = abs(sumVal);
				ans[0] = v[ptA];
				ans[1] = v[ptB];
			}
			ptA++;
		}
		else
		{
			ans[0] = v[ptA];
			ans[1] = v[ptB];
			break;
		}
	}
	cout << ans[0] << ' ' << ans[1];
}