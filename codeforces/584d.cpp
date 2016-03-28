#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
int main()
{
	int n;
	cin >> n;
	if(n==3 || n==5)
	{
		cout << "1\n";
		cout << n;
	}
	else
	{
		n-=3;
		cout << "3\n3 ";
		for(int i=n-2;i>0;i--)
		{
			if(check(i) && check(n-i))
			{
				cout << n-i << " " << i;
				break;
			}
		}
	}
	return 0;
}