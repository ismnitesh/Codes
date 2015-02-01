//https://www.hackerrank.com/contests/projecteuler/challenges/euler010
#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int i,flag=0;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 1;
	else
		return 0;
}
int main()
{
	int t,n,i;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(i=2;i<=n;i++)
		{
			if(prime(i))
				sum=sum+i;
		}
		printf("%lld\n",sum);
	}
	return 0;
}