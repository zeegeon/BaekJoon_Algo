// #11441
#include <bits/stdc++.h>
using namespace std;

int N, M;
long long a[100002];
long long sum[100002];

/*
    시간 : N이 최대 10만, 누적합 안쓰고 풀면 최대 N^2 -> 시간초과 조심
    A_i 가 1000 이므로 최대 합 = 1000 * 100000 = 10억 -> long long
*/
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        cin >> a[i];
        sum[i] = a[i] + sum[i - 1];
    }

    cin >> M;
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << '\n';
    }

    return 0;
}