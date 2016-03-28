#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int n,a[100003];
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	int g=a[0];
	for(int i=1;i<n;i++)
		g=gcd(g,a[i]);
	for(int i=0;i<n;i++)
	{
		a[i]/=g;
		while(a[i]%2==0)
			a[i]/=2;
		while(a[i]%3==0)
			a[i]/=3;
	}
	int flag=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]!=a[0])
		{
			flag=0;
			break;
		}
	}
	if(flag)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}