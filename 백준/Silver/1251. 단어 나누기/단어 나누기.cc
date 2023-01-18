#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string a, result;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a;

	result = "{";

	for (int i = 0; i < a.size() - 2; ++i) 
	{
		for (int j = i + 1; j < a.size() - 1; ++j)
		{
			string val;

			for (int k = i; k >= 0; --k)
				val += a[k];

			for (int k = j; k > i; --k)
				val += a[k];

			for (int k = a.size() - 1; k > j; --k)
				val += a[k];

			if (result > val) 
				result = val;
		}
	}

	cout << result;

	return 0;
}
