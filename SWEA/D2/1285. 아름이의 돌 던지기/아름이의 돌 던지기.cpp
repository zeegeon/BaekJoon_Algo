#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; ++test_case)
    {
        int N , min = 100001, cnt=0;
        cin >> N;

        vector<int> a;
        while (N--)
        {   
            int temp;
            cin >> temp;
            if (abs(temp) < min)
            {
                min = abs(temp);
                cnt = 1;
            }
            else if (abs(temp) == min)
            {
                cnt++;
            }
            a.push_back(abs(temp));
        }
        cout << "#" << test_case << " ";
        cout << min << " " << cnt << "\n";
    }

    return 0;
}