#include <iostream>
using namespace std;

int n=0, m, ans=0;
int st, ed;
int a[10001];

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int result = a[0];

    while (st <= ed && ed < n)
    {
        if (result < m)
        {
            result += a[++ed];
        }
        else if (result == m)
        {
            ans++;
            result += a[++ed];
        }
        else if (result > m)
        {
            result -= a[st++];

            if (st > ed)
            {
                ed = st;
                result = a[st];
            }
        }
    }
    cout << ans;

    return 0;
}