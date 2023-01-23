#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, ans;
int dp[301];
int val[301];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 1; i <= n; ++i)
		cin >> val[i];

	dp[1] = val[1]; dp[2] = val[1] + val[2];
	dp[3] = max(val[1] + val[3], val[2] + val[3]);

	for (int i = 4; i <= n; ++i)
		dp[i] = max(dp[i - 2] + val[i], dp[i-3] + val[i-1] + val[i]);

	cout << dp[n];

	return 0;
}