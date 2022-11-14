#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	vector<int> v(N);

	for (int i = 0; i < N; ++i)
	{
		int temp;
		cin >> temp;
		v[i] = temp;
	}
	sort(v.begin(), v.end());

	if (N == 1)
		cout << v[0];
	else
	{
		int prevSum = v[0];
		int ans = prevSum;
		for (int i = 1; i < N; ++i)
		{
			prevSum = prevSum + v[i];
			ans += prevSum;
		}
		cout << ans;
	}
	
	return 0;
}