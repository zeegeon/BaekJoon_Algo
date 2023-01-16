#include <iostream>
#include <algorithm>
using namespace std;

int a[1000003];
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n, greater<int>());
    
    for (int i = 0; i < n; i++)
        cout << a[i] << '\n';
    
    return 0;
}
