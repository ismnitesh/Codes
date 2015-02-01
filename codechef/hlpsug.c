#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,i,t;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(i=29;i<=n;i++)
		{
			if(prime(i))
			{
				sum=sum+i;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}