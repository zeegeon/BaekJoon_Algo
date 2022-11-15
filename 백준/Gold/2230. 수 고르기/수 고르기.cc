#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 투 포인터 사용
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	int en=0;
	int minM = 0x7fffffff;

	vector<int> v(N);
	for (int i = 0; i < N; ++i) cin >> v[i];

	sort(v.begin(), v.end());

	for (int st = 0; st < N; ++st)			// 시작 포인터 st 0부터 시작
	{
		// en 포인터가 N(끝)까지 안가고 M보다 작을 경우 포인터 en증가
		while (en < N && v[en] - v[st] < M) ++en;

		if (en == N)
			break;
		minM = min(minM, v[en] - v[st]);
	}
	cout << minM;

	return 0;
}
