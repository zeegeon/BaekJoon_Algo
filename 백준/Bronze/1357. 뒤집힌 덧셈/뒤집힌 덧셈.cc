#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a ,b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	string ans = to_string(stoi(a) + stoi(b));
	reverse(ans.begin(), ans.end());
	cout << stoi(ans);

	return 0;
}