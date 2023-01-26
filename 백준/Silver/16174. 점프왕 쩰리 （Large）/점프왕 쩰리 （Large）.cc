#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

#define clear cout << "HaruHaru"; return 0;
#define Noclear cout << "Hing";

stack <pair<int, int>> st;
int N;
int v[65][65];
int isvisit[65][65];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;

	for (int i = 0; i < N;++i)
		for (int j = 0;j < N; ++j)
			cin >> v[i][j];

	int start = v[0][0];
	int x=0, y=0;

	isvisit[0][0] = 1;
	st.push(make_pair(x, y));

	while (!st.empty())
	{
		x = st.top().first;
		y = st.top().second;
		start = v[x][y];
		st.pop();

		if (((x + start == N - 1) && (y == N - 1)) || ((x == N - 1) && (y + start == N - 1)))
		{
			clear;
		}
		else
		{
			if (x + start < N && isvisit[x + start][y] != 1)
			{
				st.push(make_pair(x + start, y));
				isvisit[x + start][y] = 1;
			}
			if (y + start < N && isvisit[x][y + start] != 1)
			{
				st.push(make_pair(x, y + start));
				isvisit[x][y + start] = 1;
			}
		}
	}

	Noclear;

	return 0;
}