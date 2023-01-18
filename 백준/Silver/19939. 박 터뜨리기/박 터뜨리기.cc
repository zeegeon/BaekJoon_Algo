#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
int ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K; // 공 N개 바구니 K 개

    
    int a=0;
    for (int i = 1; i <= K; ++i)
        a += i;

    N = N - a;
    
    if (N < 0)
    {
        cout << -1;
        return 0;
    }

    if (N % K == 0)
        cout << K - 1;
    else
        cout << K;

    return 0;
}