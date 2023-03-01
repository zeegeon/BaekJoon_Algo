#include<iostream>
using namespace std;
int a[1000001];
int b[1000001];
int c[2000002]; // 합친 배열

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    
	int n, m;
	cin >> n >> m;
    
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
    
	int i = 0; // a 배열의 index
	int j = 0; // b 배열의 index
	int k = 0; // c 배열의 index
    
	while (i < n && j < m) 
    {
		if (a[i] < b[j]) 
			c[k++] = a[i++];
		else 
            c[k++] = b[j++];
	}
    
	while (i < n) 
    {
		c[k++] = a[i++];
	}
    
	while (j < m) 
    {
		c[k++] = b[j++];
	}
    
	for (int l = 0; l < n + m; l++)
		cout << c[l] << ' ';
    
	return 0;
}