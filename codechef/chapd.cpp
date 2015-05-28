#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	long long int t,a,b,g;
	cin >> t;
	while(t--)
	{
		int flag=0;
		cin >> a >> b;
		g=gcd(a,b);
		while(g>1)
		{
			g=gcd(a,b);
			b=b/g;
			if(b==1)
				break;
		}
		if(b==1)
			cout << "Yes\n";
		else
			cout << "No\n";
	/*	else
		{
			for(int i=3;i<=b;i+=2)
			{
				if(b%i==0 && a%i!=0)
				{
					cout << "No\n";
					flag=1;
					break;
				}
				while(b%i==0)
					b/=i;
			}
			if(flag==0)
			cout << "Yes\n";
		}*/ 
	}
	return 0;
}