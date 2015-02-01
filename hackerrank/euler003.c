#include<stdio.h>
#include<math.h>
int prime(long long int x)
{
	int flag=0,i;
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
	int t;
	long long int n,i,z;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=n;i>=5;i--)
		{
			if(prime(i) && n%i==0)
			{
				z=i;
				break;
			}
		}
		printf("%d\n",z);
	}
}