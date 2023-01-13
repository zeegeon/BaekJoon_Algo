#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

map <string, string> mp;
int N, M;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		string temp, temp2;
		cin >> temp >> temp2;
		mp[temp] = temp2;
	}

	for (int i = 0; i < M; ++i)
	{
		string temp;
		cin >> temp;
		cout << mp[temp] << '\n';
	}

	return 0;
}
