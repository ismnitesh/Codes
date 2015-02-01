#include<stdio.h>
int main()
{
	long long int a[100]={0},n,sum;
	int i,t;
	scanf("%d",&t);
	a[0]=0;
	a[1]=1;
	for(i=2;i<=100;i++)
		a[i]=a[i-1]+a[i-2];
	while(t--)
	{
		scanf("%lld",&n);
		sum=0;
		for(i=2;i<=99;i++)
		{
			if(a[i]<=n && a[i]%2==0)
				sum=sum+a[i];
			if(a[i]>n)
				break;
		}
		printf("%lld\n",sum);
	}
	return 0;
}