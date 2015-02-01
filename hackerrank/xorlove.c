#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	int a[n+2];
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	while(m--)
	{
		int k,p,r;
		scanf("%d%d%d",&k,&p,&r);
		int ans=0;
		for(i=p;i<=r-1;i++)
		{
			for(j=i+1;j<=r;j++)
			{
				ans=ans+(k^(a[i]^a[j]));
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}