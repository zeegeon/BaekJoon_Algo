#include <bits/stdc++.h>
using namespace std;

int N;
long long dp[101][10];
int mod = 1000000000;
int ans;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=1; i<10; ++i)
        dp[1][i] = 1;

    for (int i = 2; i <= N; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if (j == 0)
                dp[i][0] = dp[i - 1][1];
            else if (j == 9)
                dp[i][9] = dp[i - 1][8];
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

            dp[i][j] %= mod;
        }
    }

    for (int i = 0; i < 10; i++) 
        ans = (ans + dp[N][i]) % mod;

    cout << ans;

    return 0;
}