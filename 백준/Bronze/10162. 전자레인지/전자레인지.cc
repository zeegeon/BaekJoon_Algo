#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T;
int A, B, C;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    if (T / 300 > 0)
    {
        A = T / 300;
        T -= T / 300 * 300;
    }
    if (T / 60 > 0)
    {
        B = T / 60;
        T -= T / 60 * 60;
    }
    if (T / 10 > 0)
    {
        C = T / 10;
        T -= T / 10 * 10;
    }

    if (T == 0)
        cout << A << ' ' << B << ' ' << C;
    else
        cout << -1;

    return 0;
}