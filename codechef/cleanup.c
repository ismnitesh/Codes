#include<stdio.h>
int main()
{
	int t,m,n,a[1003],b[1003],num,i,j;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<1003;i++)
			a[i]=1;
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&num);
			a[num]=0;
		}
		j=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]==1)
			{
				b[j]=i;
				j++;
			}
		}
		if((n-m)>1)
		{
			for(i=0;i<(n-m);i=i+2)
			{
				printf("%d ",b[i]);
			}
			printf("\n");
			for(i=1;i<(n-m);i=i+2)
			{
				printf("%d ",b[i]);
			}
			printf("\n");
		}
		else if(n==m)
		{
			printf("\n\n");
		}
		else if((n-m)==1)
		{
			printf("%d\n\n",b[0]);
		}
	}
	return 0;
}