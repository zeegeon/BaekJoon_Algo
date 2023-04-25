#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N;
int dp[1000001];
// 연산 하기 전 이전 값을 저장할 배열 추가 선언
int before[1000001];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 1부터 N 까지 올라가며 cnt를 dp 배열에 쌓기
	cin >> N;
	dp[1] = 0; before[1] = 0;

	for (int i = 2; i <= N; ++i)
	{
		// 3가지 연산에 대해 횟수가 가장 적게 드는 방법 update
		// 
		// 1더하는 연산
		dp[i] = dp[i - 1] + 1;
		before[i] = i - 1;

		// 1번 연산 - 3으로
		if (i % 3 == 0)
		{
			if (dp[i] > dp[i / 3] + 1)
			{
				dp[i] = dp[i / 3] + 1;
				before[i] = i / 3;
			}
		}
		// 2번 연산
		if (i % 2 == 0)
		{
			if (dp[i] > dp[i / 2] + 1)
			{
				dp[i] = dp[i / 2] + 1;
				before[i] = i / 2;
			}
		}
	}
	cout << dp[N] << '\n';
	
	// N부터 이전 값을 출력
	while (N != 0)
	{
		cout << N << ' ';
		N = before[N];
	}
}