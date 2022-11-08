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
        int N;
        cin >> N;
        int a[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
        cout << "#" << test_case << "\n";

        for (int i = 0; i < 8; ++i)
        {
            if (N / a[i] != 0)
            {
                cout << N / a[i] << " ";
                N -= a[i] * (N / a[i]);
            }
            else
                cout << 0 << " ";
        }
        cout << "\n";
    }

    return 0;
}