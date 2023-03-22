#include <bits/stdc++.h>
using namespace std;

int a1, a2, x2, y2, x3, y3;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a1 >> a2 >> x2 >> y2 >> x3 >> y3;

    if ((a1 * y2 - x2 * a2 + x2 * y3 - x3 * y2 + x3 * a2 - a1 * y3) / 2 > 0)
        cout << 1;
    else if ((a1 * y2 - x2 * a2 + x2 * y3 - x3 * y2 + x3 * a2 - a1 * y3) / 2 < 0)
        cout << -1;
    else
        cout << 0;

    return 0;
}