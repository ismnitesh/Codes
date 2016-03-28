#include<bits/stdc++.h>
using namespace std;
int p[1000002];
int main()
{
	memset(p,0,sizeof(p));
	p[1]=1;
	for(int i=3;i<1000000;i+=2)
	{
		if(p[i]==0)
		for(int j=i+i;j<=1000000;j=j+i)
			p[j]=1;
	}
	long long int t,num,x;
	cin >> t;
	while(t--)
	{
		cin >> num;
		x=sqrt(num);
		if(x*x!=num)
			cout << "NO\n";
		else
		{
			if(p[x]==1 || (x%2==0 && x!=2))
				cout << "NO\n";
			else
				cout << "YES\n";
		}
	}
	return 0;
}