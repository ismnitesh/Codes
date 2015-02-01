#include<stdio.h>
int main()
{
	int t,n,m[1000],f[1000],i,sum=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&m[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&f[i]);
			sum=sum+(m[i]*f[i]);
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}