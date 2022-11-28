#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	getline(cin, a);

	for (int i = 0; i < a.length(); ++i)
	{
		if (a[i] == ' ')
			continue;
		// 'A' = 65 'Z' = 90 'a' = 97 'z' = 122 
		// 오버플로우 생각
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 13;
			if (a[i] > 90)
				a[i] -= 26;
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			if (a[i] <= 114) 
			{
				a[i] += 13;
				if (a[i] > 122)
					a[i] -= 26;
			}
			else if (a[i] >= 's')
			{
				a[i] -= 13;
			}
		}
	}
	cout << a;

	return 0;
}