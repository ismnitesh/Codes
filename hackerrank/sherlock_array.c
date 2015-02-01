#include<stdio.h>
int main()
{
	int t,n,a[100003],sum[100003],i;
	scanf("%d",&t);
	while(t--)
	{
		int flag=0;
		scanf("%d",&n);
		a[0]=0;
		sum[0]=0;
		if(n==1)
		{
			scanf("%d",&a[0]);
			printf("YES\n");
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				scanf("%d",&a[i]);
				sum[i]=sum[i-1]+a[i];
			}
			for(i=1;i<n;i++)
			{
				if(sum[i-1]==sum[n]-sum[i])
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}