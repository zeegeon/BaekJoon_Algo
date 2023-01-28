#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int ans;
string temp;
bool miunsFlag = false;
int temptemp;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	cin >> a;

	a += '-';

	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] != '+' && a[i] != '-')
		{
			temp.push_back(a[i]);
		}
		else if (a[i] == '-')
		{
			if (miunsFlag)
			{
				miunsFlag = true;
				ans =  ans - stoi(temp) - temptemp;
				temp.clear();
				temptemp = 0;
			}
			else
			{
				miunsFlag = true;
				ans += stoi(temp);
				temp.clear();
			}
			
		}
		else if (a[i] == '+')
		{
			if (miunsFlag)
			{
				temptemp += stoi(temp);
				temp.clear();
			}
			else
			{
				ans += stoi(temp);
				temp.clear();
			}		
		}
	}

	cout << ans;

	return 0;
}