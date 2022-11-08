#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; ++test_case)
    {
        int t;
        cin >> t;

        int a[10][10] = {};

        a[0][0] = 1;

        for (int i = 1; i < t; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                if (j == 0)
                    a[i][j] = 1;
                else
                    a[i][j] += a[i-1][j] + a[i-1][j-1];
            }
        }

        cout << "#" << test_case << "\n";
        for (int i = 0; i < t;++i)
        {
            for (int j = 0; j <= i; ++j)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }

    return 0;
}