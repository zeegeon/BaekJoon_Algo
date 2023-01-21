#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string a, b, c;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> c >> b;

	if (c == "*")
	{
		for(int i = 0; i < b.size() - 1; ++i)
			a += "0";
		cout << a;
	}
	else if (c == "+")
	{
		if (a.length() >= b.length())
		{
			if(a[a.size() - b.size()] == '0')
				a[a.size() - b.size()] = '1';
			else
				a[a.size() - b.size()] = '2';
			cout << a;
		}
		else
		{
			if (b[b.size() - a.size()] == '0')
				b[b.size() - a.size()] = '1';
			else
				b[b.size() - a.size()] = '2';
			cout << b;
		}
	}

	

	return 0;
}