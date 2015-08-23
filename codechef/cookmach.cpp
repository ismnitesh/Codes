#include <iostream>
using namespace std;
int fun(long long int a)
{
	while(a>1)
	{
		if(a&1)
			return 1;
		a>>=1;
	}
	return 0;
}
int main()
{
	long long int t,a,b,cnt;
	cin >> t;
	while(t--)
	{
		cnt=0;
		cin >> a >> b;
		while(fun(a))
		{
			a/=2;
			cnt++;
		}
		while(a!=b)
		{
			if(a<b)
			{
				a*=2;
				cnt++;
			}
			else
			{
				a/=2;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}