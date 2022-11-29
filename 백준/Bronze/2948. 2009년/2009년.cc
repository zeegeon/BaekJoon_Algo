#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;
	cin >> y >> x;

	while (x != 1)
	{
		if (x == 2 || x == 4 || x == 6 || x == 8 || x == 9 || x == 11)
			y += 31;
		else if (x == 3)
			y += 28;
		else
			y += 30;
		x--;
	}

	if (y % 7 == 1)
		cout << "Thursday";
	else if (y % 7 == 2)
		cout << "Friday";
	else if (y % 7 == 3)
		cout << "Saturday";
	else if (y % 7 == 4)
		cout << "Sunday";
	else if (y % 7 == 5)
		cout << "Monday";
	else if (y % 7 == 6)
		cout << "Tuesday";
	else if (y % 7 == 0)
		cout << "Wednesday";

	return 0;
}