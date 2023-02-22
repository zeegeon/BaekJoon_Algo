#include <bits/stdc++.h>
using namespace std;

long long dp[1001];
long long num[1001][11];

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    dp[1] = 10;
    for (int i = 0; i < 10; ++i)
    {
        ++num[1][i];
    }
    
    for (int i = 2; i <= N; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            for (int p = j; p < 10; ++p)
            {
                num[i][j] += num[i - 1][p] % 10007;
            }
        }

        for (int j = 0; j < 10; ++j)
            dp[i] += num[i][j] % 10007;
    }
    cout << dp[N] % 10007;

    return 0;
}