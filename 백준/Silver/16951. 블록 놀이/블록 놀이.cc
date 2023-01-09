#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, k;
int minAns = 1001;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;

	vector<int> a(n);

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for (int i = 0; i < n; ++i) 
	{
		vector<int> temp(n);
		int impos = 0;

		temp[i] = a[i];

		for (int j = i - 1; j >= 0; --j) 
		{
			temp[j] = temp[j + 1] - k;
			if (temp[j] <= 0) 
			{
				impos = 1;
				break;
			}
		}

		if (impos) continue;

		for (int j = i + 1; j < n; ++j) 
		{
			temp[j] = temp[j - 1] + k;
		}

		int cnt = 0;
		for (int i = 0; i < n; ++i) 
		{
			if (a[i] != temp[i])
				cnt++;
		}

		minAns = min(cnt, minAns);
	}
	cout << minAns << "\n";

	return 0;
}