#include <bits/stdc++.h>
using namespace std;

int A[1002];
int dp[1002];
int ans;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
        cin >> A[i];

    for (int i = 1; i <= N; ++i)
    {
        dp[i] = 1;

        for (int j = 1; j < i; ++j)
            if (A[i] > A[j])
                dp[i] = max(dp[i], dp[j] + 1);
        
        ans = max(ans, dp[i]);
    }
    
    cout << ans;

    return 0;
}