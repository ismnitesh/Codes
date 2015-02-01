#include<stdio.h>
int main()
{
	int t,n,i,j,max;
	int a[101],d[101],g[1001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<=1001;i++)
			g[i]=0;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&d[i]);
			for(j=a[i]+1;j<=d[i];j++)
				g[j]=g[j]+1;
		}
		max=0;
		for(i=0;i<=1001;i++)
		{
			if(max<g[i])
			{
				max=g[i];
			}
		}
		printf("%d\n",max);
	}
	return 0;
}