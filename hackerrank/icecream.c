#include<stdio.h>
int main()
{
	int t,m,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&m);
		scanf("%d",&n);
		int a[n];
		int flag=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]+a[j]==m)
				{
					flag=1;
					printf("%d %d\n",i+1,j+1);
					break;
				}
				if(flag==1)
					break;
			}
		}
	}
	return 0;
}