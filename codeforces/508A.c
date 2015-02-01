#include<stdio.h>
int main()
{
	int n,m,k,a[1005][1005],i,j,x,y,z=0,v;
	scanf("%d%d%d",&n,&m,&k);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			a[i][j]=0;
	
	int flag=0,flag1=0;
	for(i=1;i<=k;i++)
	{
		scanf("%d %d",&x,&y);
		a[x][y]=1;
		if((x+1)<=n && (y+1)<=m && a[x][y]==1 && a[x+1][y]==1 && a[x][y+1]==1 && a[x+1][y+1]==1)
		{
			flag=1;
		}
		else if((x-1)>0 && (y+1)<=m && a[x][y]==1 && a[x-1][y]==1 && a[x][y+1]==1 && a[x-1][y+1]==1) 
		{
			flag=1;
		}
		else if((x-1)>0 && (y-1)>0 && a[x][y]==1 && a[x-1][y]==1 && a[x][y-1]==1 && a[x-1][y-1]==1)
		{
			flag=1;
		}
		else if((x+1)<=n && (y-1)>0 && a[x][y]==1 && a[x+1][y]==1 && a[x][y-1]==1 && a[x+1][y-1]==1)
		{
			flag=1;
		}
		if(flag==1  && flag1==0)
		{
			z=i;
			flag1=1;
		}
	}
		printf("%d",z);
	return 0;
}