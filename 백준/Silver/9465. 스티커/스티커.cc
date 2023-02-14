#include <bits/stdc++.h>
using namespace std;

int T, n;

int stick[3][100001];
int dp[3][100001];

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> stick[0][i];

        for (int i = 0; i < n; i++)
            cin >> stick[1][i];

        dp[0][0] = stick[0][0];
        dp[1][0] = stick[1][0];
        dp[0][1] = stick[0][1] + dp[1][0];
        dp[1][1] = stick[1][1] + dp[0][0];

        for (int i = 2; i < n; i++) 
        {
            dp[0][i] = stick[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
            dp[1][i] = stick[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
        }

        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
    }

    return 0;
}