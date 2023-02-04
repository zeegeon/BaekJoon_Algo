#include <bits/stdc++.h>
using namespace std;

int T,S;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T >> S;

    if (S == 1 || T <= 11 && T >= 17)
        cout << 280;
    else if (T >= 12 && T <= 16 && S == 0)
        cout << 320;
    else
        cout << 280;

    return 0;
}