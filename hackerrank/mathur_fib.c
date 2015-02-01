#include<stdio.h>
long long int a[500004];
int main()
{
	long long int sum;
	int i,n,m,t;
	a[1]=0;
	a[2]=1;
	for(i=3;i<=500000;i++)
		a[i]=a[i-1]+a[i-2];
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&m);
		for(i=1;i<=m;i++)
		{
			sum=sum+a[2*i]-a[2*i-1];
			sum=sum%1000000007;
		}
		for(i=m+1;i<=n;i++)
		{
			sum=sum+a[2*i];
			sum=sum%1000000007;	
		}
			printf("%lld\n",sum);
	}
	return 0;
}