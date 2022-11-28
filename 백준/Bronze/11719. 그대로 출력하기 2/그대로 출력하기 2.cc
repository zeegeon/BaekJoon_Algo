#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	while (!cin.eof())
	{
		getline(cin, a);
		cout << a << '\n';
	}
	return 0;
}