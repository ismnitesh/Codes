#include<stdio.h>
int main()
{
	int t,n,k,ans,a[1003],i,j;
	char o[5],c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&k,&ans);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%s",o);
		c=o[0];
		if(k==0)
		{
			printf("%d\n",ans);
			continue;
		}
			if(c=='A')
			{
				if(ans==0)
					printf("0\n");
				else
				{
					for(j=0;j<n;j++)
					{
						ans=ans&a[j];
					}
					printf("%d\n",ans);
				}
			}
			else if(c=='O')
			{
				for(j=0;j<n;j++)
				{
					ans=ans|a[j];
				}
				printf("%d\n",ans);
			}
			else if(c=='X')
			{
				if(k%2==0)
					printf("%d\n",ans);
				else
				{
					for(j=0;j<n;j++)
					{
						ans=ans^a[j];
					}
					printf("%d\n",ans);
				}
			}
	}
	return 0;
}