#include<stdio.h>
int main()
{
	int n,m,w[505],a[1005],i,j,visited[505],k,x;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&w[i]);
	for(i=1;i<=m;i++)
		scanf("%d",&a[i]);
	int count=0;
	for(i=2;i<=m;i++)
	{
		for(k=0;k<505;k++)
			visited[k]=0;
		j=i-1;
		x=a[j];
		while(x!=a[i])
		{
			if(j<1)
				break;
			if(visited[x]==0)
			{
				count=count+w[x];
				visited[x]=1;
			}
			j--;
			x=a[j];
		}
	}
	printf("%d",count);
	return 0;
}