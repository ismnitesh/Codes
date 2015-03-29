#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,n;
	scanf("%d",&t);
	int grid[15][15];
	for(i=0;i<15;i++)
	{
		grid[0][i]=1;
		grid[i][0]=1;
	}
	for(i=1;i<15;i++)
		for(j=1;j<15;j++)
			grid[i][j]=grid[i][j-1]+grid[i-1][j];
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",grid[n][n]);
	}
	return 0;
}