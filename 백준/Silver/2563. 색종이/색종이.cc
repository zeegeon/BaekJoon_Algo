#include <iostream>
using namespace std;

bool mat[100][100];
int main()
{
	int n, row, col, area = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> row >> col;

		for (int j = row; j < row + 10; ++j)
		{
			for (int k = col; k < col + 10; ++k)
			{
				if (!mat[j][k])
				{
					mat[j][k] = 1;
					++area;
				}
			}
		}
	}
	
	cout << area;
    return 0;
}