#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) 
{
    
	if (a <= b)
    {
		long long mod = b % a;
		while (mod) 
        {
			b = a;
			a = mod;
			mod = b % a;
		}
		return a;
	}
	else if (a > b) 
    {
		long long mod = a % b;
		while (mod) {
			a = b;
			b = mod;
			mod = a % b;
		}
		return b;
	}

}
long long lcm(long long a, long long b) 
{
	return a * b / gcd(a, b);
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
		long long a, b;
		cin >> a >> b;

		long long l = lcm(a, b);
		cout << l << '\n';
    }

    return 0;
}