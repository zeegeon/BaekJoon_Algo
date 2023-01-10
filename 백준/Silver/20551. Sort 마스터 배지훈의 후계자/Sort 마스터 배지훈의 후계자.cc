#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, M;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	vector<int> a(N);

	for (int& i : a)
		cin >> i;

	sort(a.begin(), a.end());

	for (int i = 0; i < M; ++i)
	{
		int temp;
		cin >> temp;

		if (binary_search(a.begin(), a.end(), temp))
			cout << lower_bound(a.begin(), a.end(), temp) - a.begin() << '\n';
		else
			cout << -1 << '\n';

	}
	
	return 0;
}
