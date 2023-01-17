#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, ans=1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    
    vector<pair<int, int>> v;

    for (int i = 0; i < N; ++i)
    {
        int a, b;
        cin >> a >> b;
        
        v.push_back({ b,a });
    }

    sort(v.begin(), v.end());

    int time = v[0].first;
    for (int i = 1; i < N; ++i)
    {
        if (time <= v[i].second)
        {
            ++ans;
            time = v[i].first;
        }
    }

    cout << ans;

    return 0;
}