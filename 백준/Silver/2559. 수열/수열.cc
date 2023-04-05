#include <iostream>
#include <math.h>
using namespace std;

int a[100001];
int sum[100001];
int N, K;
int ans = -0x7fffffff;

/*
    1. 값을 입력 받으면서 누적합 계산
    2. index가 K <= index <= N 의 범위에서
     sum[index] - sum[index -K]
     (~index 까지의 합) - (~index -K 까지의 합) => K길이 만큼의 합
    3. ans 변수와 비교 후 최대값이면 교체
    
    최소가 -100 * 100000 가능
*/

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> K;

    for (int i = 1; i <= N; ++i)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    for (int i = K; i <= N; ++i)
    {
        ans = max(ans, sum[i]-sum[i-K]);
    }

    cout << ans;

    return 0;
}