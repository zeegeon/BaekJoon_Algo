#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, d, k, c;
int ans;
int check[30001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> d >> k >> c;

	vector<int> v(N);
	for (int i = 0; i < N; ++i)
		cin >> v[i];

	// 연속으로 먹으며 최대의 종류 찾기 + 쿠폰 고려
	// 
	// 슬라이딩 윈도우 사용 시 범위 내에서 중복이 없고, 쿠폰에 해당하는게 없으면 최대
	for (int i = 0; i < N; ++i)
	{
		int dupCnt = 0; // 중복 맛
		int coupon = 1; // 쿠폰으로 맛보는 맛
		

		for (int j = i; j < i + k; ++j)
		{
			if (check[v[j % N]] == 0) // 새 맛
				check[v[j % N]] = 1;
			else // 중복 맛
				++dupCnt;
		}
		// 쿠폰 처리 , 이미 맛봤나?
		if (check[c] == 1) 
			coupon = 0;

		ans = max(ans, k - dupCnt + coupon);

		//reset
		for (int j = 0; j < 30001; ++j)
			check[j] = 0;
	}
	cout << ans;
}