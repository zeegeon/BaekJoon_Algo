#include <iostream>
using namespace std;

int L, A, B, C, D, hwDay;

int main()
{
	cin >> L >> A >> B >> C >> D;
    
	while (1)
	{
        bool kor = false, math = false;
		if (A > 0)
		{
			A -= C;
			kor = true;
		}
		if (B > 0)
		{
			B -= D;
			math = true;
		}
		if (kor || math) 
            hwDay++;
		else 
            break;
	}

	cout << L - hwDay;
}