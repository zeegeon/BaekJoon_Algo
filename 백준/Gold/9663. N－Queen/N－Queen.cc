#include <iostream>
#include <algorithm>
using namespace std;

int n;
int map[16][16];
int y[16];
int cnt;

bool check(int x, int y) 
{
	for (int i = x; i >=0; i--) 
    {
		if ((x - i >= 0 && y - i >= 0 && x - i < n && y - i < n) && (map[x - i][y - i] == 1))
            return false;
		if ((x - i >= 0 && y + i >= 0 && x - i < n && y + i < n) && (map[x - i][y + i] == 1))
            return false;
	}
	return true;
}

void dfs(int x) 
{
	if (x == n) 
    {
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++) 
    {
		if (y[i] == 1) 
            continue;
		if (!check(x, i)) 
            continue;
        
		y[i] = 1;
		map[x][i] = 1;
		dfs(x + 1);
		map[x][i] = 0;
		y[i] = 0;
	}
}


int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
	cin >> n;
	dfs(0);
	cout << cnt;
}