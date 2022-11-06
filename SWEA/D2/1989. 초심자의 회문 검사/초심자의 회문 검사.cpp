#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int ans;

int main(void) 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; ++test_case)
    {
        string a;
        cin >> a;
        string b = a;
        reverse(a.begin(), a.end());
        if (a == b)
            cout << "#" << test_case << " " << 1 << "\n";
        else
            cout << "#" << test_case << " " << 0 << "\n";
    }

    return 0;
}