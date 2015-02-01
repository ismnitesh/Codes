#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long long int n,sum,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		i=0;
		sum=0;
		while(pow(2,i++)<=n)
		{
			for(j=0;j<=n;j++)
			{
				sum=sum+pow(2,(pow(2,i)+2*j));
				sum=sum%10;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}