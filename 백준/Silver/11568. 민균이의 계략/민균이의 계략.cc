#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num[1001];
int dp[1001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> num[i];

    for (int i = 1; i <= n; i++)
        dp[i] = 1;

    for (int i = 2; i <= n; i++) 
    {
        for (int j = 1; j < i; j++) 
        {
            if (num[i] > num[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    sort(dp+1, dp + n + 1);

    cout << dp[n] << '\n';

	return 0;
}