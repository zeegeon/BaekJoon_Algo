#include <bits/stdc++.h>
using namespace std;

int N;
long long dp[91];

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    dp[1] = 1;
    
    for (int i = 2; i <= 90; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[N];
    
    return 0;
}