#include <bits/stdc++.h>
using namespace std;

int dp[16];
int pay[16];
int t[16];

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		cin >> t[i] >> pay[i];

		for (int j = 0; j < i; j++) 
		{
			if (t[j] + j <= i && i + t[i] <= n + 1) 
				dp[i] = max(dp[i], dp[j] + pay[i]);
		}
	}

	// 최댓값 계산
	int answer = 0;
	for (int i = 0; i <= n; i++)
		answer = max(answer, dp[i]);
	cout << answer;

	return 0;
}