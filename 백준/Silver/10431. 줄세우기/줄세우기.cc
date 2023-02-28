#include <bits/stdc++.h>
using namespace std;

int T, num[21], N;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;

	while (T--) 
	{
		int sum = 0;
		cin >> N;

		for (int i = 0; i < 20; i++)
			cin >> num[i];

		for (int i = 1; i < 20; i++) 
			for (int j = 0; j < i; j++) 
				if (num[j] > num[i]) 
                    sum++;
        
		cout << N << ' ' << sum << '\n';
	}

	return 0;
}