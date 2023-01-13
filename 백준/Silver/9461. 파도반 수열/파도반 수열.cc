#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int T;
long long v[101];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;

    v[1] = 1; 
    v[2] = 1; 
    v[3] = 1; 
    v[4] = 2;

	for (int i = 5; i < 101; ++i)
	{
		v[i] = v[i - 1] + v[i - 5];
	}
	
	for (int i = 0; i < T; ++i)
	{
		int temp;
		cin >> temp;
		cout << v[temp] << '\n';
	}

	return 0;
}
