#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[10001][10001],i,n,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			scanf("%d%d",&x,&y);
			a[x][y]=1;
			a[y][x]=1;
		}
		for(i=1;i<=n;i++)
		{
			
		}
	}
	return 0;
}