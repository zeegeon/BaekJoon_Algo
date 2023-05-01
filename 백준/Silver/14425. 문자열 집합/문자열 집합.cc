#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <map>
using namespace std;

int N, M, ans = 0;;

map <string, int> mp;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		string temp;
		cin >> temp;
		mp.insert(make_pair(temp, 1));
	}

	for (int i = 0; i < M; ++i)
	{
		string temp;
		cin >> temp;

		if (mp[temp] == 1)
			++ans;
	}

	cout << ans;

	return 0;
}