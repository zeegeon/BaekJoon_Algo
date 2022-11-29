#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;

	while (getline(cin, s))
	{
		int a=0, b=0, e=0, d=0;

		for (auto c: s)
		{
			if (c >= 'a' && c <= 'z')
				++a;
			else if (c >= 'A' && c <= 'Z')
				++b;
			else if (c >= '0' && c <= '9')
				++e;
			else if (c == ' ')
				++d;
		}
		cout << a << " " << b << " " << e << " " << d << "\n";
	}
	return 0;
}