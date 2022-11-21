#include <iostream>
#include <string>
using namespace std;

int sum;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int stu, app;
		cin >> stu >> app;
		sum += app % stu;
	}
	cout << sum;

	return 0;
}