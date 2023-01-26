#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int inputcnt;
void merge(int* A, int p, int q, int r, int K);

void merge_sort(int* A, int start, int end, int K) 
{
    int p = start, r = end, q;
    if (p < r) {
        q = (p + r) / 2;
        merge_sort(A, p, q, K);
        merge_sort(A, q + 1, r, K);
        merge(A, p, q, r, K);
    }
}

void merge(int* A, int p, int q, int r, int K) 
{
    int tmp[r + 2];

    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }
    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p, t = 1;
    while (i <= r) {
        A[i++] = tmp[t++];
        if (++inputcnt == K)   cout << tmp[t - 1];
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int N, K;
    cin >> N >> K;

    int* A;

    A = new int[N];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    merge_sort(A, 0, N - 1, K);

    if (inputcnt < K) 
        cout << -1;

	return 0;
}