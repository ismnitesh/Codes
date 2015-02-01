#include<stdio.h>
int main()
{
	int n,m,k,i,j,w,q,dist[105][105],x,y,z;
	scanf("%d%d%d",&n,&m,&k);
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			dist[i][j]=9999;
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		dist[x][y]=z;
		dist[y][x]=z;
	}
	for(w=1;w<=n;w++)
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(dist[i][w]+dist[w][j]<dist[i][j])
				dist[i][j]=dist[i][w]+dist[w][j];
		}
	}
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d%d",&x,&y);
		if(dist[x][y]<=k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}