#include <bits/stdc++.h>
using namespace std;

int N;
int cost[1003][3];
int dp[1003][3];
int ans = 1000 * 1000 + 1;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

	for (int k = 0; k < 3; k++) {

		for (int i = 0; i < 3; i++)
			dp[1][i] = 1000 * 1000 + 1;
		dp[1][k] = cost[1][k];

		for (int i = 2; i <= N; i++) 
		{
			dp[i][0] = cost[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
			dp[i][1] = cost[i][1] + min(dp[i - 1][2], dp[i - 1][0]);
			dp[i][2] = cost[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
		}
        
		for (int i = 0; i < 3; i++) 
		{
			if (k == i) continue;
			ans = min(ans, dp[N][i]);
		}
	}

	cout << ans;

    return 0;
}