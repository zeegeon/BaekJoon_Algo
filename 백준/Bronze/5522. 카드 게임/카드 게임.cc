#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int ans=0;
	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		ans += temp;
	}
	cout << ans;
	return 0;
}