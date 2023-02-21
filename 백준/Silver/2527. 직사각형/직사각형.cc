#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1, y1, p1, q1, x2, y2, p2, q2;
    int xdiff, ydiff;

    for (int i = 0; i < 4; ++i)
    {
        cin >> x1 >> y1 >> p1 >> q1 >> x2 >> y2 >> p2 >> q2;

        xdiff = min(p1, p2) - max(x1, x2);
        ydiff = min(q1, q2) - max(y1, y2);

        if (xdiff > 0 && ydiff > 0)
            cout << "a\n";
        else if (xdiff < 0 || ydiff < 0)
            cout << "d\n";
        else if (xdiff == 0 && ydiff == 0)
            cout << "c\n";
        else
            cout << "b\n";
    }

    return 0;
}