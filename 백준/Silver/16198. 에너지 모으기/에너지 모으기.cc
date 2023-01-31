#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int N, ans;

void DFS(vector<int> v, int sum)
{
	if (v.size() == 2)
	{
		ans = max(ans, sum);
		return;
	}

	for (int i = 1; i < v.size()-1; ++i)
	{
		vector<int> temp = v;
		temp.erase(temp.begin() + i);
		DFS(temp, sum + v[i - 1] * v[i + 1]);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	vector<int> v(N);

	for (int i = 0; i < N; ++i)
		cin >> v[i];

	DFS(v, 0);
	
	cout << ans;

    return 0;
}
