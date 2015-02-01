#include<stdio.h>
int main()
{
	int t,x,i,y,n,m;
	long long int count;
	char c,a[100005];
	scanf("%d",&t);
	while(t--)
	{
		count=1;
		scanf("%d%d",&n,&m);
		for(i=0;i<=n;i++)
			a[i]=0;
		for(i=0;i<m;i++)
		{
			scanf(" %c%d",&c,&x);
			a[x]=c;
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]!=0)
			{
				x=i;
				break;
			}
		}
		y=x;
		for(i=x+1;i<=n;i++)
		{
			if(a[i]!=0)
			{
				if(a[i]!=a[y])
				{	
					count=(count*(i-y))%1000000009;
					y=i;
				}
				else
					y=i;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}