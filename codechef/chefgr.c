#include<stdio.h>
int main()
{
	int t,n,m,a[105],i,max,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		max=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max)
				max=a[i];
		}
		count=0;
		for(i=0;i<n;i++)
		{
			count=count+max-a[i];
		}
		if(m>=count)
		{
			if((m-count)%n==0)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
			printf("No\n");
	}
	return 0;
}