#include <bits/stdc++.h>
using namespace std;
int p[1000006];
int main()
{
	long long int i,j,num;
	memset(p,0,sizeof(p));
	for(i=3;i<=1000000;i=i+2)
	{
		if(p[i]==0)
		{
			for(j=i+i;j<1000006;j=j+i)
				p[j]=1;
		}
	}
	p[1]=1;
	int n;
	cin >> n;
	while(n--)
	{
		cin >> num;
		int x=sqrt(num);
		if(x*x==num)
		{
			if(x%2==0 && x!=2)
				cout << "NO\n";
			else if(x==2)
				cout << "YES\n";
			else if(p[x]==0)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else
			cout << "NO\n";
	}
	return 0;
}