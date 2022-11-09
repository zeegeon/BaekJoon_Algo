#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; ++test_case)
    {
        int N, avg=0, ans =0;
        cin >> N;
        vector<int> a(N);
        
        for (int i = 0; i < N; ++i)
        {
            int temp;
            cin >> temp;
            a[i] = temp;
            avg += temp;
        }
        avg = avg / N;

        for (auto c : a)
        {
            if (c <= avg)
            {
                ++ans;
            }
               
        }

        cout << "#" << test_case << " " << ans << "\n";
    }

    return 0;
}