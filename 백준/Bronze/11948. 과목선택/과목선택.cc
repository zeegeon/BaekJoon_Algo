#include <iostream>
#include <algorithm>
using namespace std;

int a[4], b[2];
int sum;

int main()
{
    for(int i=0; i<4; i++)
        cin >> a[i];
    for(int i=0; i<2; i++)
        cin >> b[i];
    
    sort(a, a+4);
    sort(b, b+2);
    
    for(int i=1; i<4; i++)
        sum += a[i];
    
    sum += max(b[0], b[1]);
    
    cout << sum;
    
    return 0;
}