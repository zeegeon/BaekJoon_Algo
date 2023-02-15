#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[9];

void NandM(int start, int dept)
{
    if (dept == M)
    {
        for (int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << '\n';

        return;
    }
    for (int i = start; i <= N; ++i)
    {
        arr[dept] = i;
        NandM(i + 1, dept+1);
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    NandM(1, 0);

    return 0;
}