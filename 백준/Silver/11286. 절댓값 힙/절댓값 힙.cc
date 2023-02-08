#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
//#include <bits/stdc++.h>
using namespace std;

struct cmp {
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    priority_queue<int, vector<int>, cmp> pq;

    for (int i = 0; i < x; ++i)
    {
        int temp; 
        cin >> temp;

        if (temp == 0)
        {
            if (pq.empty())
                cout << 0 << '\n';
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
        {
            pq.push(temp);
        }
    }

    return 0;
}