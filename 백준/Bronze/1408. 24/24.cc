#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <math.h>
using namespace std;

string a, b;
int bsum = 0, asum = 0;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> a >> b;

	for (int i = 0; i < 3; ++i)
	{
		string temp = "";
		
		temp = b.substr(3 * i, 2);
		bsum += pow(60,2-i)*stoi(temp);

		temp = a.substr(3 * i, 2);
		asum += pow(60,2-i)*stoi(temp);
	}
	int ans = bsum - asum;
	if (ans < 0)
		ans += 3600*24;

	string h, m, s = "00";

	if (ans >= 3600)
	{
		h = to_string(ans / 3600);
		if (h.size() == 1)
			h = "0" + h;
		ans -= ans / 3600 * 3600;
	}
	else
		h = "00";

	if (ans >= 60)
	{
		m = to_string(ans / 60);
		if (m.size() == 1)
			m = "0" + m;
		ans -= ans / 60 * 60;
	}
	else
		m = "00";

	s = to_string(ans);
	if (s.size() == 1)
		s = "0" + s;

	cout << h << ":" << m << ":" << s;

	return 0;
}