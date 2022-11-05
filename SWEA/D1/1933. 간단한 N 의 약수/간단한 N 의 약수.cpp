#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;

    for (int i = 1; i <= a;i++)
    {
        if (a % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}