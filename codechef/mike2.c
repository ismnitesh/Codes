#include<stdio.h>
int main()
{
	int m,n,i,j;
	long long int sum1=0,sum2=0;
	scanf("%d%d",&m,&n);
	long long int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
	int q_num;
	scanf("%d",&q_num);
	int q[q_num][2];
	for(i=0;i<q_num;i++)
	{
		scanf("%d%d",&q[i][0],&q[i][1]);
	}
	for(i=0;i<q_num;i++)
	{
		if(q[i][0]>m || q[i][1]>n)
		{
			sum1=-1;
			break;
		}
		else
		{
			sum1=sum1+a[q[i][0]-1][q[i][1]-1];
		}
	}
	for(i=0;i<q_num;i++)
	{
		if(q[i][1]>m || q[i][0]>n)
		{
			sum2=-1;
			break;
		}
		else
		{
			sum2=sum2+a[q[i][1]-1][q[i][0]-1];
		}
	}
	printf("%lld\n",((sum1>sum2)?sum1:sum2));
	return 0;
}