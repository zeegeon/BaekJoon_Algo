#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N;
		int cnt = 0;
		double sum = 0;
		cin >> N;

		for (int j = 0; j < N; ++j)
		{
			int a;
			double b;
			cin >> a >> b;
			sum += a * b;
			cnt += a;
		}
		cout.precision(2);
		cout << cnt << " " << double(sum / cnt) << "\n";
	}
	return 0;
}