#include <iostream>
using namespace std;

int col, row, mx;
int a[9][9];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> a[i][j];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (a[i][j] >= mx)
			{
				mx = a[i][j];
				col = i + 1;
				row = j + 1;
			}
		}
	}

	cout << mx << "\n";
	cout << col << " " << row;

	return 0;
}