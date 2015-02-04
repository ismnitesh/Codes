#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,d,c,p,n,ti;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d",&a,&d,&c,&p,&n);
		ti=0;
		while(a<n)
		{
			d=d+c;
			a=a+d;
			ti=ti+p;
		}
		printf("%d\n",ti);
	}
	return 0;
}