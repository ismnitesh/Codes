#include<bits/stdc++.h>
using namespace std;
int pos_xi[1000002],pos_yi[1000002],pos_xf[1000002],pos_yf[1000002];
int main()
{
	int n,num,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num);
			pos_xi[num]=i;
			pos_yi[num]=j;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num);
			pos_xf[num]=i;
			pos_yf[num]=j;
		}
	}
	long long int sum=0;
	for(i=1;i<=(n*n);i++)
	{
		sum=sum+(pos_xf[i]-pos_xi[i])*(pos_xf[i]-pos_xi[i])+(pos_yf[i]-pos_yi[i])*(pos_yf[i]-pos_yi[i]);
	}
	printf("%lld",sum);
	return 0;
}