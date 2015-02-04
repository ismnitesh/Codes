#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int g[6][6],maximum=0,i,j;
	int p[5]={0,1,2,3,4};
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&g[i][j]);
	do
	{
		maximum=max(maximum,g[p[0]][p[1]] + g[p[1]][p[0]] + g[p[2]][p[3]]
            + g[p[3]][p[2]] + g[p[1]][p[2]] + g[p[2]][p[1]] + g[p[3]][p[4]]
            + g[p[4]][p[3]] + g[p[2]][p[3]] + g[p[3]][p[2]] + g[p[3]][p[4]]
            + g[p[4]][p[3]]);
	}while(next_permutation(p,p+5));
	printf("%d",maximum);
	return 0;
}