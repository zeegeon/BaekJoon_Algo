#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
//#include <bits/stdc++.h>
using namespace std;

int a = 0, b = 0, c = 0;

int dp[41][41][41];

int w(int x, int y, int z)
{
    if (x <= 0 || y <= 0 || z <= 0)
        return 1;

    else if (x > 20 || y > 20 || z > 20)
        return dp[20][20][20];

    else if (x < y && y < z)
        return (dp[x][y][z-1] + dp[x][y - 1][z - 1] - dp[x][y - 1][z]);
    
    else
        return (dp[x-1][y][z] + dp[x-1][y-1][z] + dp[x-1][y][z-1] - dp[x-1][y-1][z-1]);
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        cin >> a >> b >> c;

        int ans = 0;

        if (a == -1 && b == -1 && c == -1)
            break;

        for (int i = 0; i < 21; ++i)
        {
            for (int j = 0; j < 21; ++j)
            {
                for (int p = 0; p < 21; ++p)
                {
                    dp[i][j][p] = w(i, j, p);
                }
            }
        }

        if (a <= 0 || b <= 0 || c <= 0)
            ans = 1;
        else if (a > 20 || b > 20 || c > 20)
            ans = dp[20][20][20];
        else
            ans = dp[a][b][c];

        cout << "w(" << a << ", " << b << ", " << c << ") = " << ans << '\n';
    }

    return 0;
}
