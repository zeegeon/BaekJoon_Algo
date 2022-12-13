#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;

	if (a.length() >= b.length())
		cout << "go";
	else
		cout << "no";

	return 0;
}