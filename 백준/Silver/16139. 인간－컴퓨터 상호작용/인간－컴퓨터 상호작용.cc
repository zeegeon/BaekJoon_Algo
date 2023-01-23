#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string s;
int q, l, r;
char alpha;

int str[2000002][26] = {};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s >> q;

	str[1][s[0] - 'a']++;

	for (int i = 1; i <= s.size(); ++i)
	{
		str[i+1][s[i] - 'a']++;

		for (int j = 0; j < 26; ++j)
			str[i+1][j] += str[i][j];
	}

	for (int i = 0; i < q; ++i)
	{
		cin >> alpha >> l >> r;
		cout << str[r+1][alpha - 'a'] - str[l][alpha - 'a'] << '\n';
	}

	return 0;
}