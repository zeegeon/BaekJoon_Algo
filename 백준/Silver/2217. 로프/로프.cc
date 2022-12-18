#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int all;
int maxx = 0;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> all;
	for (int i = 0; i < all; ++i)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); ++i)
	{
		maxx = max((int)(v[i]*(v.size()-i)), maxx);
	}

	cout << maxx;
	return 0;
}