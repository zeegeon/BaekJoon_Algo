#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;
vector<string> ans;
int cnt;

bool Bsearch(vector<string> v, string findStr)
{
	int st=0, en = v.size()-1, mid;
	while (st <= en)
	{
		mid = (st + en) / 2;

		if (v[mid] == findStr)
		{
			return true;
		}
		else if (v[mid] > findStr)
		{
			en = mid - 1;
		}
		else
		{
			st = mid + 1;
		}
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	string a;
	for (int i = 0; i < N; ++i)
	{
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < M; ++i)
	{
		cin >> a;
		if(binary_search(v.begin(), v.end(), a))
		{
			++cnt;
			ans.push_back(a);
		}
	}
	sort(ans.begin(), ans.end());

	cout << cnt << '\n';
	for (auto c: ans)
	{
		cout << c << '\n';
	}
	
	return 0;
}