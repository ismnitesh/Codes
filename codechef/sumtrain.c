#include<stdio.h>
int maxi(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	int t,a[105][105]={0},b[105][105]={0},i,j,k,n,max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		i=0;
		j=0;
		for(k=0;k<n*(n+1)/2;k++)
		{
			if(j<i)
			{
				scanf("%d",&a[i][j]);
				j++;
			}
			else if(j==i)
			{
				scanf("%d",&a[i][j]);
				i++;
				j=0;
			}
		}
		i=1;
		j=0;
		b[0][0]=a[0][0];
		while(j<=n && i<=n)
		{
			if(j==0)
			{
				b[i][j]=a[i][j]+b[i-1][j];
				j++;
			}
			if(j<i && j!=0)
			{
				b[i][j]=a[i][j]+maxi(b[i-1][j],b[i-1][j-1]);
				j++;
			}
			if(j==i)
			{
				b[i][j]=a[i][j]+b[i-1][j-1];
				i++;
				j=0;
			}
		}
		max=0;
		for(i=0;i<n;i++)
		{
			if(max<b[n-1][i])
				max=b[n-1][i];
		}
		printf("%d\n",max);
	}
	return 0;
}