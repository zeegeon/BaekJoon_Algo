#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int N, M;
map<string, int> poketStr;
map<int, string> poketNum;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		string temp;
		cin >> temp;
		poketStr.insert(make_pair(temp, i));
		poketNum.insert(make_pair(i, temp));
	}

	for (int i = 0; i < M; i++)
	{
		string temp;
		cin >> temp;

		if (isdigit(temp[0]) != 0)
		{
			cout << poketNum[stoi(temp)];
		}
		else
		{
			cout << poketStr[temp];
		}
		cout << '\n';
	}

	return 0;
}
