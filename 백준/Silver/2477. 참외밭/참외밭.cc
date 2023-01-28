#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int K, ans;
int A[16], B[16];
int rule[4][2] = { {1,3},{4,1},{2,4},{3,2} };
int small, big;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> K;

    for (int i = 0; i < 6; i++)
        cin >> A[i] >> B[i];

    for (int i = 0; i < 6; i++) 
    {
        A[i + 6] = A[i];
        B[i + 6] = B[i];
    }

    for (int i = 2; i < 9; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (A[i] == rule[j][0] && A[i + 1] == rule[j][1]) 
            {
                small = B[i] * B[i + 1];
                big = B[i - 2] * B[i + 3];

                ans = K * (big - small);
            }
        }
    }

    cout << ans;

	return 0;
}